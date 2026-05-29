#include <iostream>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin >> t; 
	for(int i = 1;i<=t;i++){
		ll a, b;
		cin >> a >> b; 
		ll ans = INT_MAX; 
		for (int ad = 0; ad < 32; ad++) {
			ll os = ad; 
			ll nb = b + ad; 
			if (nb == 1) {
				continue;
            }
			ll ca = a; 
			while (ca > 0) {
				ca /= nb; 
				os++; 
			}
			ans = min(ans, os); 
		}
		cout << ans << endl; 
	}
}

