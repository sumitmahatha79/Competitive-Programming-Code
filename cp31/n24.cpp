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
        int maxi = 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '#'){
                cnt++;
            }
            else{
                maxi = max(cnt,maxi);
                cnt = 0;
            }
        }
        maxi = max(cnt,maxi);
        int ans;
        if(maxi%2==0){
            ans = maxi/2;
        }
        else{
            ans = (maxi/2)+1;
        }
        cout<<ans<<endl;
    }
}