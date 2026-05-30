#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ok = false;
    if(n == 1){
        if(s[0] == '1'){
            ok = true;
        }
    }
    else{
        if(s[0] == '1' && s[n-1] == '1'){
            ok = true;
        }
        int tw = 0;
        for(int i = 1;i<n;i++){
            if(s[i] == '1' && s[i-1] == '1'){
                tw++;
            }
        }
        if(tw>=2){
            ok = true;
        }
        else if(tw == 1 && (s[0] == '1' || s[n-1] == '1')){
            ok = true;
        }
    }
    if(ok == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}