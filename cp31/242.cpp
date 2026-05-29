#include<iostream>
using namespace std;
void solve(){
    int n, m;
        cin >> n >> m;
        vector<vector<long long >> a(n,vector<long long>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        long long ans = 0;
        for (int j = 0; j < m; j++) {
            vector<long long> col;
            for (int i = 0; i < n; i++) {
                col.push_back(a[i][j]);
            }

            sort(col.begin(), col.end());

            long long pref = 0;
            for (int i = 0; i < n; i++) {
                ans += col[i] * i - pref;
                pref += col[i];
            }
        }

        cout << ans << '\n';

}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}


