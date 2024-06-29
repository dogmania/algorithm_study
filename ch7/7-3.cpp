#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int binary_search(vector<int> arr, int m) {
    int start = 0;
    int end = arr.back();
    int answer = 0;

    while (start <= end) {
        int sum = 0;
        int mid = (start + end) / 2;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] - mid > 0) sum += arr[i] - mid;
        }

        if (sum >= m) {
            answer = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return answer;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int answer = binary_search(arr, m);

    cout << answer << '\n';
}