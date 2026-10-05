#include <stdio.h>
#include <limits.h>

void merge(int a[], int low, int mid, int high){
    int n1= mid - low + 1;
    int n2= high - mid;
    int L[n1 + 1], R[n2+1];
    for(int i=0; i<n1; i++){
        L[i] = a[low + i];
    }
    for(int j=0; j<n2 ; j++){
        R[i]= a[ mid +j + 1];
    }
    L[n1]= INT_MAX;
    R[n2]= INT_MAX;
    int i=0, j=0;
    for(int k=low; k<= high; k++){
        if ( L[i] <= R[j]){
            a[k]= L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
    }
}

void MergeSort(int a[], int low, int high){
    if( low < high){
        int mid = low + (high - low)/2;
        MergeSort(a, low , mid);
        MergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main(){
    int a[]= {7,6,5,4,3,2,1};
    int n= sizeof(a)/ sizeof( a[0]);
    MergeSort( a, 0, n-1);
    for( int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
    
}
