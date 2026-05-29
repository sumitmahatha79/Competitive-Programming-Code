// Jai Shree Krishna 
#include <iostream>
 
using namespace std;
 
// ---------- SHORTCUTS ----------
#define ll long long
#define fast_io ios::sync_with_stdio(false);cin.tie(nullptr);
 
// ---------- CONSTANTS ----------
const ll MOD = 1e9 + 7;
 
// ---------- HELPER FUNCTIONS ----------
 
ll gcd(ll a, ll b) {
    return (b == 0 ? a : gcd(b, a % b));
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
ll mod_add(ll a, ll b, ll m = MOD) {
    a %= m;
    b %= m;
    return (a + b + m) % m;
}
ll mod_mul(ll a, ll b, ll m = MOD) {
    a %= m;
    b %= m;
    return (a * b) % m;
}
ll mod_sub(ll a, ll b, ll m = MOD) {
    a %= m;
    b %= m;
    return (a - b + m) % m;
}
ll mod_pow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while (b) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
 
// ---------- VECTOR UTILITIES ----------
 
// Sort ascending
template < typename T >
    void sortAsc(vector < T > & v) {
        sort(v.begin(), v.end());
    }
 
// Sort descending
template < typename T >
    void sortDesc(vector < T > & v) {
        sort(v.rbegin(), v.rend());
    }
 
// Reverse vector
template < typename T >
    void reverseVec(vector < T > & v) {
        reverse(v.begin(), v.end());
    }
 
// Rotate vector right by k steps
template < typename T >
    void rotateRight(vector < T > & v, int k) {
        int n = v.size();
        if (n == 0) return;
        k %= n;
        rotate(v.rbegin(), v.rbegin() + k, v.rend());
    }
 
// Rotate vector left by k steps
template < typename T >
    void rotateLeft(vector < T > & v, int k) {
        int n = v.size();
        if (n == 0) return;
        k %= n;
        rotate(v.begin(), v.begin() + k, v.end());
    }
 
// Print vector (for quick checks)
template < typename T >
    void printVec(const vector < T > & v) {
        for (auto & x: v) cout << x << ' ';
        cout << '\n';
    }
 
// ---------- SOLUTION ----------
void solve() {

}
// ---------- MAIN ----------
int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
}
