#include <iostream>
using namespace std;
int main() {
    int i,arr[20], n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0 ; i<n; i++){
        cout<<"Enter the "<<i<< " element of the array: ";
        cin>> arr[i];
    }
    
    int found=0, p,elem;
    cout<<"Enter the element: ";
    cin>>elem;
    for(i=0; i<n; i++){
        if(arr[i]==elem){
            found=1;
            p=i;
        }
    }
    if( found){
        cout<<"Element found in the array at index "<< p;
    }
    else{
        cout<<"Element is not present in the array";
    }
    return 0;
}