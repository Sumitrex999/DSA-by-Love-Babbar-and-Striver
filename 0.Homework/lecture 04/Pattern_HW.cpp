#include <iostream>
using namespace std;



int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        int k=1;
        while(j>0){
            cout<<k;
            k++;
            j--;
        }

        int l=(i-1)*2;
        while(l){
            cout<<"*";
            l--;
        }

        int m=n-i+1;
        while(m){
            cout<<m;
            m--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}

