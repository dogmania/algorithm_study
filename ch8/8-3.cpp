// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     int n;

//     cin >> n;

//     vector<int> storage (n, 0);
//     vector<int> dp(n, 0);

//     for (int i = 0; i < n; i++) {
//         cin >> storage[i];
//     }

//     //문제를 푸는 아이디어: 마지막으로 터는 창고를 기준으로 생각한다.

//     dp[0] = storage[0];
//     dp[1] = max(storage[0], storage[1]); 
//     // 두번째 식량 창고까지만을 기준으로 봤을 때 첫번째, 두번째를 동시에 선택할 수 없다. 따라서 두번째 식량 창고까지만 생각한다면, 
//     // 두번째를 선택하거나 첫번째를 선택하는 두가지 선택지만 존재함.
//     // 따라서 첫번째 창고에 있는 값과 두번째 창고에 있는 값 중 큰 쪽을 저장하는 것이 최댓값을 저장할 수 있는 것.

//     for (int i = 2; i < n; i++) {
//         dp[i] = max(dp[i - 1], dp[i - 2] + storage[i]);
//         // dp[i]에는 storage[i]까지 고려했을 때 가능한 최댓값이 저장되어야 한다.
//         // dp[i - 1], dp[i - 2]에도 각각 해당 인덱스의 창고까지 고려했을 때 가능한 최댓값이 저장되어 있음
//         // 이때 인덱스 i까지를 고려했을 때 가능한 선택지는 두가지가 존재함. i번째 창고를 선택할 것이냐, 선택하지 않을 것이냐
//         // i를 선택한다면 당연히 i - 1은 선택할 수 없고 i - 2를 선택하는 것은 가능함
//         // 그렇다면 i - 2번째까지 고려했을 때 최댓값에 storage[i]를 더한 값을 dp[i]는 가질 수 있고 
//         // 항상 i번째를 선택하는 것이 최댓값은 아니기에, i를 선택하지 않는 것과 i를 선택하는 것을 비교하여 더 큰 값을 dp[i]에 저장하면 된다.
//     }

//     cout << *max_element(dp.begin(), dp.end()) << '\n';
// }