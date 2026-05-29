#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        string s,t;
        cin>>s>>t;
        vector<int>fs(26,0);
        vector<int>ft(26,0);
        for(int i = 0;i<s.size();i++){
            char c = s[i];
            int a = int(c);
            fs[a-65]++;
        }
        for(int i = 0;i<t.size();i++){
            char c = t[i];
            int a = int(c);
            ft[a-65]++;
        }
        for(int i = 0;i<26;i++){
            int k = fs[i]-ft[i];
            if(k>0){
                int o = 0;
                char c = int(65+i);
                for(int j = s.size()-1;j>=0;j--){
                    if(s[j]==c){
                        o++;
                       if(o>ft[i]){
                        s[j]=' ';
                       }
                    }
                }
            }
        }
        string ans;
        for(int i = 0;i<s.size();i++){
            if(s[i]!=' '){
                ans+=s[i];
            }
        }
        if(ans == t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}