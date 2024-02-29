#include <bits/stdc++.h>

using namespace std;

// Wait printing the element for a time proportionate to its magnitude and hence the lower magnitude gets printed first
// Time complexity is O(nlogn + max_element) 
// -> nlogn for insertion in priority queue(internal thread creation)
// -> max_element because of the maximum sleeping time
// Not pratical for real life scenarios but is cool
auto execute = [](int element) {
    sleep(element);
    cout << element << " ";
};

// Create a thread for each element in the list
void sleepSort(vector<int>& arr) {
    vector<thread> THREADS;
    for (int num : arr) {
        THREADS.push_back(thread(execute, num));
    }
    auto originalthread = THREADS.begin();
    while(originalthread != THREADS.end()) {
        originalthread->join();
        originalthread++;
    }
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sleepSort(arr);
    return 0;
}