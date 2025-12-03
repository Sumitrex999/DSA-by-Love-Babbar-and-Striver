#include<iostream>
using namespace std;

void pathToHome(int src,int des){
    cout << "src:" << src << " " << "des:" << des << endl;
    if (src == des){
        cout << "Reached Home";
        return;
    }
    src++;
    pathToHome(src, des);

}


int main(){
    int src = 0;
    int des ;
    cin >> des ;
    cout << "src:" << src << " " << "des:" << des << endl;
    pathToHome(src, des);
    cout << endl;
    return 0;

}