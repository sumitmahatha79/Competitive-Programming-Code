#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        vector<long long>v(n);
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sum +=v[i];
        }

        long long scr = 1;
        long long cv = v[n-1];
        for(int i = n-2;i>=0;i--){
            sum -= v[i+1];
            //long long hcf = gcd(sum,cv);
            //scr = max(hcf,scr);
            cv+=v[i];
        }
        cout<<scr<<endl;

    }

}
