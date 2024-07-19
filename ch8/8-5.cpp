// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> coin(n, 0);
//     vector<int> dp(m + 1, 10001);

//     dp[0] = 0;

//     for (int i = 0; i < n; i++) {
//         cin >> coin[i];
//         dp[coin[i]] = 1;
//     }

//     for(int i = 0; i < n; i++) {
//         for (int j = coin[i]; j < m + 1; j++) {
//             dp[j] = min(dp[j], dp[j - coin[i]] + 1);
//         }
//     }

//     if (dp[m] > 10000) cout << -1 << '\n';
//     else cout << dp[m] << '\n';
// }