#include <iostream>
#include<iterator>
#include <vector>
// pre-processor directive
using namespace std;
void rotate(vector<int>& nums, int k) {
    vector<int> temp;
    int n = nums.size();
    // store in temp;
    for (int i = n - k; i < n; i++)
    {
        temp.emplace_back(nums[i]);
    }
    // rotate from end till n-k
    for (int j = n - 1; j >= k;j--){
        nums[j] = nums[j - k];
    }
    // rotate from 0 to k
    for (int z = 0; z < k;z++){
        nums[z] = temp[z];
    }
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate(nums, 3);
    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}