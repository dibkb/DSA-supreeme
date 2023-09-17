#include<iostream>
#include<math.h>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {1, 3,3,3,4};
    int low = 0;
    int high = 1;
    int count = 0;
    int n = nums.size();
    while (low < high)
    {
        if(nums[low] < nums[high]){
            count = count + 2;
            if(low < high){
                low = low + 2;
            }
            else if (high < n-1){
                high = high + 2;
            }
        }
        else if (nums[low] == nums[high]){
            high++;
        }
        else
        {
            break;
        }
    }
    cout << n-count;
    return 0;
}