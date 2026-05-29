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
        int st = 0;
        if(s[0]=='1'){
            s[0] = '#';
            if(n!=1){
                s[1] = '#';// 0 1 0 0 1 0 0 
            }
            st++;
        }
        if(s[n-1]=='1' && n!=1){
            s[n-1] = '#';
            if(n!=1){
                s[n-2] = '#';
            }
            st++;
        }
        for(int i = 1;i<n-1;i++){  
            if(s[i]=='1'){
                s[i] = '#';
                s[i+1] = '#';
                s[i-1] = '#';
                st++;
            }
        }

        int mini = 0;
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                cnt++;
            }
            else{
                if(cnt==1){
                    int val = (cnt/3)+1;
                    mini+=val;
                    cnt=0;
                }
                else{
                    if(cnt%3==0){
                int val = (cnt/3);
                mini+=val;
                cnt = 0;
            }
            else{
                int val = (cnt/3)+1;
                mini+=val;
                cnt = 0;
            }
            }

            }
        }
        if(s[n-1] !='#'){
        if(cnt == 1){
            mini += cnt;
        }
        else{
            if(cnt%3==0){
                int val = (cnt/3);
                mini+=val;
            }
            else{
        int val = (cnt/3)+1;
        mini+=val;
            }
        }
    }
        cout<<(mini+st)<<endl;
    }
}