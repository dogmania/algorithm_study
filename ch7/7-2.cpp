#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int binary_search(int start, int end, vector<int> arr, int target) {
    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) start = mid + 1;
        else if (arr[mid] > target) end = mid - 1;
    }

    return -1;
}

int main() {
    int n, m;
    bool answer = true;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> search_list(m, 0);

    for (int i = 0; i < m; i++) {
        cin >> search_list[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < m; i++) {
        int result = binary_search(0, n - 1, arr, search_list[i]);

        if (result == -1) cout << "no ";
        else cout << "yes ";
    }
}