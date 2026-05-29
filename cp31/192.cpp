#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        vector<int>v(26,0);
        string ch;
        for(int i = 0;i<s.size();i++){
           if(v[(s[i]-97)]==0){
            v[(s[i]-97)]++;
            ch+=s[i];
           }
           else{
            break;
           }
        }
        int k = ch.size();
        bool ok = true;
        int u = 0;
        for(int i = 0;i<s.size();i++){
            if(ch[u] == s[i]){
                if(u==(k-1)){
                    u = 0; 
                }
                else{
                u++;
                }
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}