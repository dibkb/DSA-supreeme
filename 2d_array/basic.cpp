#include <iostream>
// pre-processor directive
using namespace std;
void multiArray(){
    int rows = 4;
    int cols = 3;
    int arr[rows][cols];
    // store input
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    // print values
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols; j++){
            cout << arr[i][j];
        }
    }
}
int main(){
    multiArray();
    return 0;
}