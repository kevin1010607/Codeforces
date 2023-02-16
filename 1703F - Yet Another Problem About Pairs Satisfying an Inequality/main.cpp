#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> A(n+1), dp(n+1);
        for(int i = 1; i <= n; i++) cin >> A[i];
        ll res = 0;
        for(int i = 1; i <= n; i++){
            if(A[i] < i) res += dp[max(0, min(A[i], i)-1)];
            dp[i] = dp[i-1]+(A[i]<i);
        }
        cout << res << "\n";
    }
    return 0;
}