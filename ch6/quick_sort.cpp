#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void quick_sort(vector<int>& list, int start, int end) {
    if (start >= end) return; //원소가 1인 경우 종료

    int pivot = start;
    int left = start + 1;
    int right = end;

    while (left <= right) {
        while (left <= end && list[left] <= list[pivot]) {
            left++;
        }
        while (right > pivot && list[right] >= list[pivot]) {
            right--;
        }

        if (left > right) {
            int temp = list[right];
            list[right] = list[pivot];
            list[pivot] = temp;
        } else {
            int temp = list[left];
            list[left] = list[right];
            list[right] = temp;
        }
    }

    quick_sort(list, start, right - 1);
    quick_sort(list, right + 1, end);
}

int main() {
    vector<int> list = {5, 7, 9, 0, 3, 1, 6, 2, 4, 8};

    quick_sort(list, 0, list.size() - 1);

    for (auto l: list) {
        cout << l << ' ';
    }
}