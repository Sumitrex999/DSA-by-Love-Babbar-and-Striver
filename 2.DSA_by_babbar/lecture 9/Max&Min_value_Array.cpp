#include<iostream>
#include <climits>
using namespace std;

int max_arr(int arry[],int n){

    int max = INT_MIN;
    for(int i=0;i<n;i++){

        if(arry[i]>max){
            max=arry[i];
        }
    }
    return max;
}

int min_arr(int arry[],int m){
    int min = INT_MAX;
    for(int i=0;i<m;i++){
        if (arry[i]<min){
            min=arry[i];
        }
    }
    return min;
}



int main(){
    int size;
    cout<<"Enter thr size of the Array;";
    cin >> size;
    int num[100];
    cout<<"Enter the Elements of array;";
    for(int i=0;i<size;i++){
        cin>>num[i];
        
    }
    
    cout<<"Maximum Value Of The Array Is "<<max_arr(num,size)<<endl;
    cout<<"Minimum Value Of The Array Is "<<min_arr(num,size)<<endl;
    return 0;

}

