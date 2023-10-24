#include <iostream>
#include<iterator>
#include <vector>
// pre-processor directive
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int it = 0; it < nums.size();it++){
            int val = nums[it];
            int rem = target - val;
            if(mpp.find(rem) != mpp.end()){
                return {mpp[rem],it};
            }
            mpp[val] = it;
        }
        return {-1,-1};

        
    }
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    
}