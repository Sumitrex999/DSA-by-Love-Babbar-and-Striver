#include<iostream>
using namespace std;

int sumArr(int arr[], int size){
    if(size == 0){
        return 0;
    }
    return arr[0] + sumArr(arr+1,size-1);
    
    

}

int main (){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;


    int sum = sumArr(arr, size );
    cout<<sum<<endl;
}