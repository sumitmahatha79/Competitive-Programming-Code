#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == 'a'){
                cnt++;
            }
        }
        if(cnt == n){
            cout<<"NO"<<endl;
        }
        else{
        int k = 0;
        int l = n-1;
        bool ok = false;
        while(k<l){
            if(s[k] != s[l] ){
                ok = true;
                if(s[k] == 'a'){
                    s.insert(k,1,'a');
                }
                else if(s[l] == 'a'){
                    s.insert(l,1,'a');
                }
                else{
                    s.insert(k,1,'a');
                }
                break;
            }
            if(s[k] == s[l]){
                if(s[k] != 'a'){
                    ok = true;
                    s.insert(k,1,'a');
                    break;
                }
            }
        }
        if(ok == false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

    }

    }
}