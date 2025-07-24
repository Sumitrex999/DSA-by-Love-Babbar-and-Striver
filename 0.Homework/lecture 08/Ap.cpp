#include<iostream>
using namespace std;

int Arprog(int n){
    int Ap=(3*n)+7;
    return Ap;
}

int main(){
    int m,ans;
    cout<<"enter the digit";
    cin>>m;
    ans=Arprog(m);
    cout<<"the arethemetic progression's mth term in series is"<<ans;
}
    