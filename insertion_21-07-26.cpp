#include <iostream>
using namespace std;
int main(){
    int arr[5],i,n;
    cout<<"Enter n: ";
    cin>> n;
    
    for(int i=0; i<n; i++){
    cout<<"Enter the "<< i <<" element of the array: ";
    cin>> arr[i];   
    }
    
    int pos, ele;
    cout<<"Enter the position for insertion: ";
    cin >> pos;
    cout<<"Enter the element: ";
    cin>> ele;
    
    for(int i=n; i>=pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=ele;
    n++;
    cout<<"Elements after insertion are:" << endl;
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}