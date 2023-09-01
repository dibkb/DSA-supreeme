#include <iostream>
// pre-processor directive
using namespace std;
void holllowRectangle(){
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 6;j++){
        if(i ==0 || i ==3){
            cout << "* ";
        }else{
            if(j == 0 || j == 5){
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        }
        cout << endl;
    }
}
void halfPyramid(){
    int ROW = 5;
    int COL = 5;  
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j <= i; j++){
        cout << "* ";
        }
        cout << endl;
    }
}
void invertdHalfPyramid(){
    int n=5;
    for (int row = 0; row <= n;row++){
        for (int col = 0; col <= n-row; col++){
        cout << "* ";
        }
        cout << endl;
    }
}
int main(){
    invertdHalfPyramid();
}