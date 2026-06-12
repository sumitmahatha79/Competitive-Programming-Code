#include <iostream>
#include<map>
using namespace std;
map<pair<long long,long long>, long long>bp;
long long x;
long long love(long long a, long long b) {
    if (a > b) swap(a, b);
    if (a == b) return 0;
    pair<long long,long long> state = {a, b};
    if (bp.count(state))
        return bp[state];
    long long ans=b-a;
    if (a > 0)
        ans = min(ans, 1 +love(a / x, b));
    if (b > 0)
        ans = min(ans,1+love(a,b/x));
    return bp[state] = ans;
}
int main() {
    int t;
    cin >> t;
    for(int i = 1;i<=t;i++){
        long long a,b;
        cin>>a>>b>>x;
        bp.clear();
        cout<<love(a,b)<<endl;
    }
}