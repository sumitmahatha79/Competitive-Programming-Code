#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i = 1;i<=t;i++)
	{
		string A, B;
		cin >> A >> B;
		long long n = A.size(), m = B.size();
		long long lcs = 0;

		for (long long len = 1; len <= min(n, m); len++)
		{
			for (long long i = 0; i + len <= n; i++)
			{
				
				for (long long j = 0; j + len <= m; j++)
				{
					
					string eA = A.substr(i, len);
					string eB = B.substr(j, len);

					
					if (eA == eB)
						lcs = max(lcs, len); 
				}
			}
		}
		long long operations = n + m - 2 * lcs;
		cout << operations << endl; 
	}
	return 0;
}

