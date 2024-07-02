// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>
// #include <climits>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp(n + 1, INT_MAX);

//     dp[1] = 0;  //1의 경우 1에서 1로 가는 연산 횟수가 0이므로 0을 저장

//     for (int i = 2; i < n + 1; i++) {
//         dp[i] = dp[i - 1] + 1;  //가장 먼저 i - 1까지 최소 연산 횟수에서 1을 더한 값을 저장. 이 값은 i에서 i - 1로 단순 뺄셈을 했을 때의 연산 횟수를 저장한 것

//         if (i % 2 == 0) dp[i] = min(dp[i / 2] + 1, dp[i]);
//         //위에서 저장한 단순 뺄셈 연산 횟수와 dp[i / 2]까지의 최소 연산 횟수에 1을 더한 값을 비교하여 더 작은 값을 저장한다. 
//         //i가 2의 배수라면 i / 2에서 곱셈 한번으로 i를 만들 수 있고 거꾸로 생각하면 i에서 2로 한 번만 나누면 i / 2가 될 수 있기 때문에 i / 2까지의 최소 연산 횟수와 연산 횟수가 1 차이가 나게 된다.
//         //이 값을 단순 뺄셈 연산과 비교하여 더 작은 값을 선택하는 것이다.

//         if (i % 3 == 0) dp[i] = min(dp[i / 3] + 1, dp[i]);
//         //i가 3의 배수인 경우 앞의 모든 경우와  i / 3으로 가는 경우의 연산 횟수를 비교하여 작은 값을 선택하면 된다. 

//         if (i % 5 == 0) dp[i] = min(dp[i / 5] + 1, dp[i]);
//     }

//     cout << dp[n] << '\n';
// }