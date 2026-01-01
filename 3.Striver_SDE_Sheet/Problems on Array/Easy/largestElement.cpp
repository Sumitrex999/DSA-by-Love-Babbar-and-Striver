#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
        }
        return largest;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Solution sol;
    int result = sol.largestElement(arr);
    
    cout << "Largest element: " << result << endl;
    
    return 0;
}