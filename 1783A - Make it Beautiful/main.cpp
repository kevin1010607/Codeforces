#include <bits/stdc++.h>
using namespace std;
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> A(n);
        for(auto& i : A) cin >> i;
        sort(A.rbegin(), A.rend());
        if(A[0] == A[n-1]) cout << "NO\n";
        else{
            if(A[0] == A[1]) swap(A[0], A[n-1]);
            cout << "YES\n";
            for(int i = 0; i < n; i++)
                cout << A[i] << " \n"[i==n-1];
        }
    }
    return 0;
}
