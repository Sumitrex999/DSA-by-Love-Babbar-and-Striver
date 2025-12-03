#include<iostream>
using namespace std;

int pivotArray(int arr[] ,int size){
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int main (){
    int arr1[8]={5,6,7,8,9,1,2,3};
    int size = 8;
    int pivotIndex = pivotArray(arr1 ,size);
    cout<< pivotIndex <<endl;

    return 0;
}