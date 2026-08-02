#include <iostream>
using namespace std;
int main(){
    int i,arr[20], n;
    cout<<"Enter n: ";
    cin>>n;
    for(i=0 ; i<n; i++){
        cout<<"Enter the "<<i<< " element of the array: ";
        cin>> arr[i];
    }
    cout<<"Array befor deletion: ";
    for(i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    int pos;
    cout<<"Enter position: ";
    cin>> pos;
    for(i= pos-1; i<n-1; i++){
        a[i]=a[i+1];
    }
    n--;
    cout<<"Array after deletion is: ";
    for(i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}