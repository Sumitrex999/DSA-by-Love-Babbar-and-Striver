#include<iostream>
using namespace std;

int sumofarray(int array[],int size){
    int sum =0;
    for (int i=0;i<size;i++){
        sum+=array[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of array;";
    cin>>size;
    int array[100];
    for(int i=0;i<size;i++){
        cout<<"Enter the element"<<i<<" ";
        cin>>array[i];
        cout<<endl;
    }
    cout<<"Sum of all elements are ;"<<sumofarray(array,size);
    

}