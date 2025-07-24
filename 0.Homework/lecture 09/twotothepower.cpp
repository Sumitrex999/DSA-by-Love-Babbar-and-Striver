#include<iostream>
using namespace std;


bool twotothepower(int n){
    int array[30];
    int pow=1;
    for(int i=0;i<30;i++){
        array[i]=pow;
        pow=pow*2;
        if (array[i]==n){
            return 1;
        }
    }
}

int main(){
    int n;

    cout<<"Enter the integer to check whether it can be presented as power of 2"<<endl;
    cin>>n;
    int a = twotothepower(n);
    if (a){
        cout<<"yes";
    }

    else{
        cout<<"no";
    }
    
}