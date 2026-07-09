#include <iostream>
using namespace std;
void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int lo = 1, hi = m;
    int ans = m;
    while (lo<=hi) {
        int mid = (lo+hi)/2;

        int f = m / (mid + 1);
        int rem = m % (mid + 1);

        int row = f*mid+min(rem,mid);

        if (row * n >= k) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
     cout<<ans<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}