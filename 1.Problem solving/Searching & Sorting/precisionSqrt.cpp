#include<iostream>
#include <iomanip> 
using namespace std;

long long int sqrt(int n){
    long long int s = 0, e = n;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    while(s<=e){
        long long int sqr = mid*mid;

        if(sqr == n){
            return mid;

        } 
        else if (sqr < n){
            ans = mid ;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;

}

double press(int n, long long int tempsol,int dec ){
    double fac = 1;
    double ans = tempsol;
    for (int i = 0;i < dec; i++){
        fac = fac/10;
        for (double j = ans; j*j<n ; j = j + fac){
            ans = j;
        }
    }
    return ans;
}


int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    long long int tempsol = sqrt(n);
    double sol = press(n,tempsol,12);
    cout << fixed << setprecision(12) << sol << endl; 

    return 0;
}