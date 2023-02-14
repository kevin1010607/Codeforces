#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a;
    cin >> n >> m >> a;
    cout << ((long long)(n+a-1)/a)*((m+a-1)/a) << "\n";
    return 0;
}