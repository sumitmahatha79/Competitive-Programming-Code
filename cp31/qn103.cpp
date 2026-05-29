#include<iostream>
#include<set>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>pr(n);
        set<char>pt;
        for(int i = 0;i<n;i++){
            pt.insert(s[i]);
            int a = pt.size();
            pr[i] = a;
        }

        vector<int>su(n);
        set<char>st;
        for(int i = n-1;i>=0;i--){
            st.insert(s[i]);
            int a = st.size();
            su[i] = a;
        }
        int maxi = INT_MIN;              // 1 2 3 4 5 6 6 7 8 9
        for(int i = 0;i<n-1;i++){        // 9 8 7 6 5 5 4 3 2 1
            maxi = max((su[i+1]+pr[i]),maxi);
        }
        cout<<maxi<<endl;
    }
}