#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n, 0);

    dp[0] = 1;
    dp[1] = 3;

    for (int i = 2; i < n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 2];
    }

    cout << dp[n - 1] << '\n';
}