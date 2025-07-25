#include<iostream>
using namespace std;

int max_arr(int arry[],int size){
    int max =INT_MIN;
    for(int i=0;i<size;i++){
        if(arry[i]>max){
            max=arry[i];
        }
        return max;
    }
}



int main(){
    int size:
    cin >> size;
    int array[100];
    for(int i=0;i<size;i++){
        cin>>array[i];
        
    }
    max=max_arr(array,size)
    cout<<max<<endl;
    return 0;

}