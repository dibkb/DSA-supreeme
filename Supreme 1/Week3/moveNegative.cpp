#include <iostream>
#include <vector>
// pre-processor directive
using namespace std;
int main(){
    vector<int> myVector = {1, -4, 5, 1, -32, 32, 31};
    for(auto&it: myVector){
        cout << it <<" ";
    }
    cout << endl;
    int low, high;
    low = 0;
    high = myVector.size() - 1;
    while(low<= high){
        if(myVector[low] < 0){
            low++;
        }
        else
        {
            swap(myVector[low], myVector[high]);
            high--;
        }
    }
        for(auto&it: myVector){
        cout << it <<" ";
    }
    
    return 0;
}