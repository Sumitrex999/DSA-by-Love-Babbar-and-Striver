#include<iostream>
using namespace std;

int binarySearch(int *arr, int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end )/2;

    while (start<=end){

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
            
        }
        else{
            end = mid - 1;
        }

        mid = (start + end )/2;
    }

    return -1;

}


int main(){
    int arr1[7]={12,23,45,56,78,89,90};
    int arr2[6]={23,32,34,43,45,65};

    int key1 = 12;
    int key2 = 505;

    int size1 = 7 ;
    int size2 = 6 ;

    int index = binarySearch(arr2, size2, key2);

    if(index == -1){
        cout<< "Element not found";

    }
    else{
        cout << " Element found at index : " << index << endl;
    }


    return 0;


}