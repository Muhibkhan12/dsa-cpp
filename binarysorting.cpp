#include <iostream>
using namespace std;



int main(){

    int arr[10] = {2,3,4,1,8,6,5,7,9,10};
    int i;
    int j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }

    for(i=0;i <10;i++){
        cout << arr[i] << endl;
    }   
    return 0;
}