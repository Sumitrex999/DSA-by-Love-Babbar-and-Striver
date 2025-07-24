#include <iostream>
using namespace std;

int countsetbit(int n){
    int count=0;
    while(n!=0){
        if(n & 1){
            count++;
        }
        n=n>>1;

    }
    return count;
    
}

int main(){
    int a,b;
    cout<<"enter the two no.s ";
    cin>>a>>b;
    cout<<"No. of set bits in a & b are "<<countsetbit(a)<<" and "<<countsetbit(b);
}
