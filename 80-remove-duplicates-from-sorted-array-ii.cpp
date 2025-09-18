// LeetCode 80. Remove Duplicates from Sorted Array II

#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicates such that each element appears at most twice
int removeDuplicates(vector<int>& arr) {
    int n = arr.size();

    // If array size is <= 2, it's already valid
    if (n <= 2)  
        return n;

    // k is the index where the next valid element should be placed
    int k = 2; // first two elements are always allowed

    // Start checking from the 3rd element (index 2)
    for (int i = 2; i < n; i++) {
        // Only keep arr[i] if it's not the same as arr[k-2]
        // This ensures at most 2 duplicates
        if (arr[i] != arr[k - 2]) {
             arr[k] = arr[i]; // put current element at position k
            k++;             // increase the length of valid array
        }
        // else skip it (do nothing)
    }

    return k; // return the length of valid portion
}

int main() {
    // Example test case
    vector<int> nums = {0,0,1,1,1,1,2,3,3};

    int k = removeDuplicates(nums);

    cout << "Length after removing duplicates: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
