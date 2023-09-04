#include <iostream>
#include <string>
// pre-processor directive
using namespace std;
void pyramidFull(){
    int N;
    cout << "Enter input";
    cin >> N;
    for (int i = 0; i < N;i++){
        for (int j = 0; j < (2 * N) - 1; j++)
        {
            if(j < N-i-1){
                cout << "  ";
            }else{
                if(j<N+i){
                    cout << "* ";
                }
            }
        }
        cout << endl;
    }
}
void numericPalindrome(){
    int N;
    cout << "Enter input";
    cin >> N;
    for (int i = 0; i < N;i++){
        for (int j = 1; j < i+2; j++)
        {
            cout << j;
        }
        // for (int j = i+2; j < i+1; j--)
        // {
        //     cout << j;
        // }
        
        cout << endl;
    }
}
void solidHalfDiamond(){
    int N;
    cout << "Enter number";
    cin >> N;
    for (int i = 0; i < (2 * N) - 1;i++){
        int c = 0;
        if(i < N){
            c = i;
        }
        else
        {
            c = N;
        }
        for (int j = 0; j < c; j++)
        {
            cout << "* ";
        }
        cout <<endl;
    }
}
void fancyPattern(){
    int N;
    cout << "Enter number";
    cin >> N;
    for (int i = 0; i < N;i++){
        for (int j = 0; j < N-i;j++){
            cout << "*";
        }
        for (int j = 0; j < i + 1;j++){
            if( j == i){
                cout << i + 1;
            }else{
            cout << i+1<<"*";
            }
        } 
        for (int j = 0; j < N-i;j++){
            cout << "*";
        }
            cout << endl;
    }
}
int main(){
    fancyPattern();
    return 0;
}