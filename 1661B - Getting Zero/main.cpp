#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        int res = x?15:0;
        if(x)
            for(int j = 0; j < 15; j++)
                res = min(res, 15-__builtin_ctz(x+j)+j);
        cout << res << " \n"[i==n-1];
    }
    return 0;
}