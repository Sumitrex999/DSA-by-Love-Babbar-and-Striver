#include<iostream>
#include <climits>
using namespace std;

int Sumofarry(int arry[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= arry[i];
    }
    return sum;
}

void reverse(int arry[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arry[start],arry[end]);
        start++;
        end--;
    }
    cout<<"Revese of the given array is ;";
    for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";

    }
    cout<<endl;
}

int main(){
    int size;
    int num[100];
    cout<<"enter the size of Array; ";
    cin>>size;
    cout<<"enter the elements of Array; ";
    for (int i=0;i<size;i++){
        cin>>num[i];
    };

    cout<<"Sum of the elements of array is ; "<< Sumofarry(num,size)<<endl;
    
    reverse(num,size);


    return 0;



}