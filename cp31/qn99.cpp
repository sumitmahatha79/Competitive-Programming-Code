#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<ll>v(n);
        
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
         ll maxi1 = abs(v[0]-v[1]);
         ll maxi2 = abs(v[n-1]-v[n-2]);
        ll maxi = INT_MIN;
        ll val = INT_MIN;
        for(int i = 0;i<n-1;i++){
            val = max((ll)val,(ll)abs(v[i]-v[i+1]));
            if(val == abs(v[i]-v[i+1])){
            maxi = max({maxi,v[i+1],v[i]});
            }
        }
        ll m = INT_MAX;
        for(int i = 0;i<n-2;i++){
            m = min(m,abs(v[i]-v[i+2]));
        }
        // ll maxi = INT_MIN;
        // ll val = INT_MIN;
        // for(int i = 0;i<n-2;i++){
        //     val = min(val,abs(v[i]-v[i+2]));
        //     if(val = abs(v[i]-v[i+2])){
        //         maxi = v[i+1];
        //     }
       // }
        vector<ll>u;
        int a = 1;
        for(int i = 0;i<n;i++){
            if(v[i]==maxi && a == 1){
                a++;
                continue;
            }
            else{
                u.push_back(v[i]);
            }
        }
        ll sum = 0;
        for(int i = 0;i<u.size()-1;i++){
            sum+=abs(u[i]-u[i+1]);
        }
        cout<<sum<<endl;
    }
    
}