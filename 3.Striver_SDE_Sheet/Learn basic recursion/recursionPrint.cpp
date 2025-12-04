#include<iostream>
using namespace std;

void printRecursion(int n, int cnt){
    
    if(cnt == n){
        return;
    }
    cout<<cnt<<" "<<"You Called Me?"<<endl;
    cnt++;
    printRecursion(n,cnt);

}

int main(){
    int n;
    int cnt = 0;
    cin>>n;
    printRecursion(n,cnt);
    return 0;
}