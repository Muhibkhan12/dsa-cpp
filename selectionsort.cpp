#include <iostream>
using namespace std;


int main(){


    int arr[10] = {2,3,1,4,7,5,6,9,8,10};
    
    for(int i =0;i<10 ; i++ ){
        int smallestIndex = i;
        for(int j = i+1; j < 10 ; j++ ){
            if(arr[j] < arr[smallestIndex] ){
                smallestIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIndex];
        arr[smallestIndex] = temp;
    }

    for(int i = 0;i < 10; i++){
        cout << arr[i] << endl;
    }
    return 0;
}