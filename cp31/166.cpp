#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, c;
        cin >> n >> c;

        vector<long long> s(n);

        for(int i=0;i<n;i++)
            cin >> s[i];

        long double C = 0;
        long double twoAB = 0;

        for(int i=0;i<n;i++){
            C += s[i] * s[i];
            twoAB += s[i];
        }

        long long ro1 = (-4*twoAB + sqrtl(16*twoAB*twoAB + 16*n*(c-C))) / (8*n);

        cout <<ro1 << "\n";
    }
}
