vector<int> mergeArrays(vector<int>& arr1, vector<int>& arr2) {

    int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2) {

        if(arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        }
        else {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n1) {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < n2) {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}
