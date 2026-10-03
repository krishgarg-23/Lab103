#include <iostream>
using namespace std;
int main() {
    int a[20][20];
    int r,c;
    cout<< "Enter r: ";
    cin>> r;
    cout<< "Enter c: ";
    cin>> c;
    cout<<"Enter elements of the array: \n";
    for (int  i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin>> a[i][j];
        }
    }
    int transpose[20][20];
    
    for(int i=0; i< r ; i++){
        for(int j=0; j< c; j++ ){
            transpose[j][i]= a[i][j];
        }
    }
    for (int  i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            cout<< transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
