// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <cmath>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp(n, 0);

//     dp[0] = 1; // 0번째 칸까지 타일로 채우는 방법은 한가지가 존재한다
//     dp[1] = 3; // 1번째 칸까지 타일로 채우는 방법은 세가지가 존재한다

//     for (int i = 2; i < n; i++) {
//         dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 2]) % 796796;
//         // i번째칸까지 타일로 채우는 방법은 i - 2번째 칸에서 2 * 2 하나를 써서 채우거나 2 * 1 두개를 써서 채우는 두가지 방법이 존재하고
//         // i - 1번째칸에서 1 * 2 하나를 써서 채우는 한가지 방법이 존재한다
//         // 따라서 모든 가능한 가짓수를 누적해서 더해주고 문제 조건에 맞게 796796으로 나눈 나머지 값을 저장한다. 마지막에 나눠줄 경우 숫자가 매우 커져서 오버플로우가 발생할 수 있음.
//     }

//     cout << dp[n - 1] << '\n';
// }