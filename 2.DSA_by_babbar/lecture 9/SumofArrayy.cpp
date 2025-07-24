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

int main(){
    int size;
    int num[100];
    cout<<"enter the size of Array; ";
    cin>>size;
    cout<<"enter the elements of Array; ";

    for (int i=0;i<size;i++){
        cin>>num[i];
    };

    cout<<"Sum of the elements of array is ; "<< Sumofarry(num,size);
    return 0;



}