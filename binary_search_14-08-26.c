#include <stdio.h>

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int l = 0, r = n - 1, mid;
    int result = -1;

    while (l <= r) {
        mid = l + (r - l) / 2; 
        
        if (arr[mid] == target) {
            result = mid; 
            break;        
        }
        else if (arr[mid] > target) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
