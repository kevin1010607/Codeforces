#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n, l, r;
    cin >> t;
    while(t--){
        cin >> n >> l >> r;
        vector<int> A(n);
        for(auto& i : A) cin >> i;
        sort(A.begin(), A.end());
        ll res = 0;
        int j = n, k = n;
        for(int i = 0; i < n; i++){
            while(j>0 && A[j-1]>=l-A[i]) j--;
            while(k>0 && A[k-1]>r-A[i]) k--;
            res += max(0, min(k, i)-j);
        }
        cout << res << "\n";
    }
    return 0;
}