#include <iostream>
using namespace std;
int main(){
    int arr[20], n;
    cout<<"Enter n: ";
    cin>> n;
    for(int i=0; i<n; i++){
    cout<<"Enter the "<< i <<" element of the array: ";
    cin>> arr[i];
    }
    cout<<"Elements of the array are: " << endl;
    for(int i=0; i<n; i++){
    cout<< arr[i] << " ";
    }
}