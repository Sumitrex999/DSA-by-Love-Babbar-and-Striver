#include <iostream>
using namespace std;

bool isSorted(int arr[],int size){

    if(size == 1 || size == 0 ){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    else{
        bool sortRemaining = isSorted(arr+1,size-1);
        return sortRemaining;

    }
}

int main(){
    int arr[6]={1,2,3,4,7,6};

    int size = 6;
    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is sorted"<<endl;

    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

}