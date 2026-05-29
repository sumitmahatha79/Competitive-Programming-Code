#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = -1;
        for(int i = 0;i<n-3;i++){
            if(s[i]=='2' && s[i+1]=='0' && s[i+2]=='2'){
                if(s[i+3]== '6'){
                    ans = 0;
                    break;
                }
                else if(s[i+3]== '5'){
                    ans = 1;
                }

            }
        }
        if(ans == -1){
            cout<<0<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}