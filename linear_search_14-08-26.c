#include <stdio.h>
int main(){
    int a[50],n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int f=0, key;
    printf("Enter the element to find: ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==key){
            f=1;
            printf("Element found at index %d", i);
            break;
        }
    }
    if(f==0){
        printf("Element not found");
    }
    
}