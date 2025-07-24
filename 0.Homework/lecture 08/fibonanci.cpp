#include<iostream>
using namespace std;

int finbonanci(int n){
    int first,second;
    first=0;
    second=1;
    int sum;
    if(n==1){
        return first;
    }
    else if (n==2){
        return second;
    }
    else if(n==0){
        return 0;
    }
    
    for(int i=1;i<(n-1);i++){
        sum =first+second;
        first=second;
        second=sum;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the nth digit in series; ";
    cin>>n;
    cout<<finbonanci(n);
}