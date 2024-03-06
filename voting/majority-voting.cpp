#include <bits/stdc++.h>

using namespace std;

int findMajorityElement(vector<int>& arr) {
    int canditate = -1, votes = 0;
    for (int ele : arr) {
        if (votes == 0) canditate = ele;
        if (ele == canditate) votes++;
        else votes--;
    }
    return canditate;
}

bool isMajorityElement(int m, vector<int>& arr) {
    int count = 0;
    for (int ele : arr) {
        if (ele == m) count++;
    }
    if (count > arr.size() / 2) return true;
    return false;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int m = findMajorityElement(arr);
    // Handle false positives
    if (isMajorityElement(m, arr)) cout << "The majority element is " << m;
    else cout << "There is no majority element";

    return 0;
}