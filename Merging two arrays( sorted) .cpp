#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int arr1[] = {1,2,4,5};
    int arr2[] = {3,6,7,9};

    int n = 4;
    int m = 4;

    vector<int> ans;

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n) {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < m) {
        ans.push_back(arr2[j]);
        j++;
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}
