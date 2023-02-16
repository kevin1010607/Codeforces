#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> A(n);
        for(auto& i : A) cin >> i;
        if(A[0] == A[n-1]) cout << "NO\n";
        else{
            reverse(A.begin(), A.end());
            if(A[0] == A[1]) swap(A[0], A[n-1]);
            cout << "YES\n";
            for(int i = 0; i < n; i++)
                cout << A[i] << " \n"[i==n-1];
        }
    }
    return 0;
}