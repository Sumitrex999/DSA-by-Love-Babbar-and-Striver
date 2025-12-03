#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    int i = 0;
    cout<<"Size:"<<size<<endl;
    while (i<size){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
        
    
    
}


bool linearSearch(int arr [], int size, int key){
    printArr(arr,size);
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool searchRest = linearSearch(arr + 1, size - 1, key);
        return searchRest;
    }
}

int main (){

    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int key = 3;
    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Present"<<endl;

    }
    else{
        cout<<"Not Present"<<endl;
    }

    return 0;
}