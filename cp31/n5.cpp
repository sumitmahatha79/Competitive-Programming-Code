#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans = 0;
        for(int i = s.size()-1;i>=0;i--){
            bool ok = true;
            if(s[i] == '1'){
                for(int j = max(0,i-k+1);j<=(i-1);j++){
                    if(s[j] == '1'){
                        ok = false;
                        break;
                    }
                }
                if(ok == true){
                ans++;
                }
            }
            
        }
        cout<<ans<<endl;
    }
}