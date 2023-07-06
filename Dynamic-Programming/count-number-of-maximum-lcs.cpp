#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), dp(n), cnt(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                if (dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    cnt[i] = cnt[j];
                } else if (dp[j] + 1 == dp[i]) {
                    cnt[i] += cnt[j];
                }
            }
        }
        if (cnt[i] == 0) cnt[i] = 1;
    }

    int max_len = *max_element(dp.begin(), dp.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (dp[i] == max_len) {
            ans += cnt[i];
        }
    }

    cout << ans << endl;
    return 0;
}


// [1,3,5,4,7]