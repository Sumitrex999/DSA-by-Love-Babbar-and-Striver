#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0 , e = size - 1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if (arr[mid]== key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        else if (arr[mid]>key){
            e = mid - 1;
        }

        mid = s+(e-s)/2;

    }

    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0 , e = size - 1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if (arr[mid]== key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        else if (arr[mid]>key){
            e = mid - 1;
        }

        mid = s+(e-s)/2;

    }

    return ans;
}





int main(){
    int arr1[6]={1,2,3,3,3,5};
    int size = 6;
    int key = 3;
    int first = firstOcc(arr1, size, key);
    int last = lastOcc(arr1, size, key);
    cout<<first<<" "<<last<<endl;
}