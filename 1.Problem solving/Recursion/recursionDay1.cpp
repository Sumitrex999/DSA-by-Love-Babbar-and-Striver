#include <iostream>
using namespace std;


// void printf(int n){

//     if(n == 0){
//         return;
//     }
//     printf(n - 1);
//     cout<<n<<" ";
    
// }



// int main(){
//     int n;
//     cin >> n;
//     printf(n);
//     return 0;
// }

// int fact(int n){
//     if ( n == 0 || n == 1){
//         return 1;
//     }
//     return n * (fact(n - 1));
// }

// int main(){
//     int n;
//     cin >> n;
//     int ans = fact(n);
//     cout<< ans << endl;
//     return 0;
// }

int power(int n){
    if(n == 0){
        return 1;
    }
    return 2 * power( n - 1);
}

int main(){
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;
    return 0;


}