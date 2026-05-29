#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.size();
        if(n<=10){
            cout<<s<<endl;
        }
        else{
            string ans;
            int v = n-2;
            string st = to_string(v);
            ans.push_back(s[0]);
            ans+=st;
            ans.push_back(s[n-1]);
            cout<<ans<<endl;
        }
    }
}