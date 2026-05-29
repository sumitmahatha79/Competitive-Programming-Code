
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        ll n = s.size();
        if(s.size()==1){
            if(s[0]=='0')cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
        s+=s;
        ll cnt = 0;
        ll maxi = 0;
        for(ll i = 0;i<s.size()-1;i++){
            if(s[i] == '1' && s[i+1] == '1'){
                cnt++;
            }
            else{
                maxi = max(cnt,maxi);
                cnt = 0;
            }
        }
        maxi = max(cnt,maxi);
        if(maxi != 0) maxi++;
        if(maxi == 0){
            for(ll i = 0;i<s.size();i++){
                if(s[i]== '1'){
                    cnt = 1;
                }
            }
        }
        maxi = max(cnt,maxi);
        if(maxi == 0){
            cout<<0<<endl;
        }
        else if(maxi == 1){
            cout<<1<<endl;
        }
        else{
            if(s.size()==maxi){
                cout<<n*n<<endl;
            }
            else{// this is main part
                 
                if(maxi%2==0){
                    ll val = maxi/2;
                    ll ans = val*(val+1);
                    cout<<ans<<endl;
                }
                else{

                    
                    ll val = (maxi-1)/2;
                    ll ans = (val+1)*(val+1);
                    cout<<ans<<endl;
                }
            // int ans = 2*(maxi-1);
            // cout<<ans<<endl;
            }

        }
    }
    }
}
// 0 1 1 1 1 1 1 1
// 1 0 1 1 1 1 1 1
// 1 1 0 1 1 1 1 1
// 1 1 1 0 1 1 1 1
// 1 1 1 1 0 1 1 1
// 1 1 1 1 1 0 1 1
// 1 1 1 1 1 1 0 1
// 1 1 1 1 1 1 1 0

// 0 1 1 1
// 1 0 1 1
// 1 1 0 1
