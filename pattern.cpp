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
void fullHollowPyramid(){
    int n = 6;
    for (int i = 0; i < n;i++){
        // int k = 0;
        for (int j = 0; j <= (2 * n - 1); j++)
        {   
        if(j < n-i-1){
            cout << "  ";
        }
        else{
        

        }
        }
    }
}
void hollowSquare(){
    int N = 4;
    for (int i = 0; i < N;i++){
        for (int j = 0; j < N;j++){
            if(i ==0 || i == N-1 || j==0 || j==N-1){
            cout << "* ";
            }else{
            cout << "  ";
            }
        }
        cout << endl;
    }
}
int main(){
    hollowSquare();
}