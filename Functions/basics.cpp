#include <iostream>
#include <vector>
// pre-processor directive
using namespace std;
void reverseInt(){
    int N;
    cout << "Enter number";
    cin >> N;
    
}
void printArray(){
    int array[9] = {4, 22, 9, 12, 74, 42, 6, 14, 31};
    int size = 9;
    int l = 0;
    int r = size - 1;
    while(l<=r){
        if(l==r){
            cout << array[l] <<" ";
        }
        else{
            cout << array[l] << array[r] <<" ";
        }
        l++;
        r--;
    }
}

int main(){
    return 0;
}