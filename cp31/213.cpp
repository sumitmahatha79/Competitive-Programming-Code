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
        for(int i = 1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                if(s[i] == '0'){
                    s[i] = '1';
                }
            }
        }
        int cnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }

        for(int i = 1;i<n-1;i++){
            if(s[i-1] == '1' && s[i+1] == '1'){
                if(s[i] == '1'){
                    s[i] = '0';
                }
            }
        }

        int vnt = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='1'){
                vnt++;
            }
        }

        cout<<vnt<<" "<<cnt<<endl;
        
    }
}