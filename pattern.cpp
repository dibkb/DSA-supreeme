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
    int n = 5;
    int cols = (2 * n) - 1;
    for (int i = 0; i < n; i++)
    {
        int stars = 2 * i + 1;
        int spaces = cols - 1 - stars / 2;
        for (int j = 0; j < cols; j++)
        {
            if(j <= spaces){
            cout << "* ";
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
void hollowInvertedHalfPyramid(){
    int N = 6;
    for (int i = 0; i < N;i++){

        for (int j = 0; j < N-i;j++){
            if(i == 0 || i==N-1 || j==0 || j==N-i-1){
            cout << "* ";
            }else{
            cout << "  ";
            }
        }
        cout << endl;
    }
}
void invertedHalfPyramid(){
    int N = 5;
    for (int i = 0; i < N;i++){
        int k = 0;
        for (int j = 0; j < (2 * N) - 1;j++){
            if (j < i)
            {
                cout << "  ";
            }else{
                if(k < (2*N)-1 -2*i){
                cout << "* ";
                k++;
                }
            }

        }
        cout << endl;
    }
}
void diamondOfStarts(){
    int N = 5;
    for (int i = 0; i < N;i++){
        for (int j = 0; j < N;j++){

        }
    }
}
void fancyPattern(){
    int n = 4;
    // cin << n; 
    for (int i = 0; i < n;i++){
        for (int j = 0; j < (2*i)+1;j++){
            if(j %2 ==0){
                cout << i + 1;
            }else{
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main(){
    fancyPattern();
}