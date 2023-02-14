#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N = 10, dx[4] = {1, 0, 1, 1}, dy[4] = {0, 1, 1, -1};
    vector<string> A(N);
    for(auto& i : A) cin >> i;
    auto dfs = [&](int i, int j, int di, int dj){
        int res = 0;
        while(i+di>=0 && i+di<N && j+dj>=0 && j+dj<N && A[i+di][j+dj]=='X')
            i += di, j += dj, res++;
        return res;
    };
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] != '.') continue;
            for(int k = 0; k < 4; k++){
                if(dfs(i, j, dx[k], dy[k])+dfs(i, j, -dx[k], -dy[k]) >= 4){
                    cout << "YES\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
    return 0;
}