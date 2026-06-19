#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        bool uk = true;
        for(int i = 0;i<n;i++){
            if(s[i] != c){
                uk = false;
                break;
            }
        }
        if(uk == true){
            cout<<0<<endl<<endl;
            
            continue;
        }
        int ans = -1;
        for(int i = 1;i<=n;i++){
            bool ok = true;
            for(int j = i;j<=n;j+=i){
                if(s[j-1] != c){
                    ok = false;
                    break;
                }
            }

            if(ok == true){
                ans = i;
                break;
            }
        }
        if( ans != -1){
            cout<<1<<endl;
            cout<<ans<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n<<" "<<n-1<<endl;
        }
    }
}