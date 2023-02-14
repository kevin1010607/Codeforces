#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, res = 0;
    cin >> n >> k;
    vector<int> A(n);
    for(auto& i : A) cin >> i;
    sort(A.begin(), A.end());
    for(auto i : A){
        while(k*2 < i) k <<= 1, res++;
        k = max(k, i);
    }
    cout << res << "\n";
    return 0;
}