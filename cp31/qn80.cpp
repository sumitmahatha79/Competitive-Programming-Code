#include<iostream>
using namespace std;
typedef long long mux;
int main (){
    mux t;
    cin>>t;
    for(mux i = 1;i<=t;i++){
        string s;
        cin>>s;
        mux n = s.size();

        // in worst case ans will be n-2
        mux ans = n-2;

        
        for(mux i = 0;i<n-1;i++){
            for(mux j = i+1;j<n;j++){
                mux sum = 0;
                sum = sum*10 + (s[i]-48);
                sum = sum*10 + (s[j]-48);
                if(sum%25==0){
                    ans = min(ans,(n-i-2));
                }
            }
        }
        cout<<ans<<"\n";
    }
}