#include <bits/stdc++.h>
using namespace std;

bool binarysearch(vector<int>&v,int x){
    int s=0;
    int e=v.size();
    while(s<=e){
        int m=s+(e-s)/2;
        if(v[m]==x){
            return true;
        }
        else if(x<v[m]){
            e=m-1;
        }
        else{
            s=m+1;
        }
    }
    return false;
    


}





int main(){

    vector<int>v ={2,3,4,5,6,7};
    int x;
    cout<<"Enter the value to be search : ";
    cin>>x;

    if (binarysearch(v,x)){
        cout<<"Found!";
    }
    else{
        cout<<"Not Found!";
    }
   
    return 0;
}