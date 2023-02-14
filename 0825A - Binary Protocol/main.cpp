#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, res = 0, now = 0;
    string s;
    cin >> n >> s;
    s += "0";
    for(auto i : s){
        if(i == '1') now++;
        else res = 10*res+now, now = 0;
    }
    cout << res << "\n";
    return 0;
}