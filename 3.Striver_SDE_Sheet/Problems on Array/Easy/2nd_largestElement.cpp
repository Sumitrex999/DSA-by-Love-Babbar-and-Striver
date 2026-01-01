#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = nums[0];
        int slargest = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]>largest){
                slargest = largest;
                largest = nums[i];
            }
            else if(nums[i]<largest && nums[i]>slargest){
                slargest = nums[i];
            }
        }
        if(slargest == INT_MIN){
            return -1;
        }
        else{
            return slargest;
        }
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
    int result = sol.secondLargestElement(arr);
    
    if(result == -1){
        cout << "No second largest element found" << endl;
    }
    else{
        cout << "Second largest element: " << result << endl;
    }
    
    return 0;
}