#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin >> t;
	for(int i = 1;i<=t;i++){
		ll n, k, b, s;
		cin >> n >> k >> b >> s;

		ll mini = (k * b);
		ll maxi = (k * b) + (k - 1) * n;

		if (s < mini || s > maxi)
			cout << "-1" << endl;
		else
		{
			vector<ll> ans(n, 0);
			ans[0] = mini;
			s -= mini;

			for (int i = 0; i < n; i++)
			{
				ans[i] += min((k-1),s);
				s -= min((k-1),s);
			}

			for (ll i = 0; i < n; i++)
				cout << ans[i] << " ";
			cout << endl;
		}
	}

	
}
