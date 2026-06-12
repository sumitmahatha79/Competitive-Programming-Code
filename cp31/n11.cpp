// #include <iostream>
// #include<map>
// using namespace std;
// map<pair<long long,long long>, long long> bp;
// long long x;
// long long  love(long long a, long long b) {
//     if (a > b) {
//         swap(a, b);
//     }
//     if (a == b) {
//         return 0;
//     }
//     pair<long long,long long>u= {a, b};

//     if (bp.count(u))
//         return bp[u];
//     long long ans = b - a;

//     if (a >= x)
//         ans = min(ans,1+love(a/x,b));
//     if (b >= x)
//         ans = min(ans, 1 + love(a, b / x));
//     return bp[u] = ans;
// }
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     for(int i = 1;i<=t;i++){
//         long long a, b;
//         cin >> a >> b >> x;
//         bp.clear();
//         cout<<love(a,b)<<endl;
//     }
// }

#include <iostream>
#include<map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 1;i<=t;i++){
        long long a,b,x;
        cin>>a>>b>>x;
        map<long long,long long> A,B;
        long long cr = a, ct = 0;
        while(true){
            if (!A.count(cr))
                A[cr] = ct;
            if (cr == 0) break;
            cr/=x;
            ct++;
        }
        cr = b;
        ct = 0;
        while (true){
            if (!B.count(cr))
                B[cr] = ct;

            if (cr == 0) break;
            cr/= x;
            ct++;
        }
        long long ans = abs(a - b);
        for (auto [xx, yy] : A) {
            for (auto [kk, ll] : B) {
                long long e = yy+ll+abs(xx-kk);

                ans = min(ans,e);
            }
        }
        cout << ans <<endl;
    }
}