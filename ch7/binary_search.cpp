#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int binary_search(int start, int end, vector<int> arr, int target) {
    while(start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        }
    }

    return -1;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = binary_search(0, n - 1, arr, target);

    if (result == -1) cout << "찾고자 하는 값이 없습니다." << '\n';
    else cout << to_string(result + 1) + "번째에 존재합니다." << '\n';
}