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
        int u = 0;
        int c = 0;
        int k = 0;
        for(int j = 0;j<n;j++){
            if(s[j]=='.'){
                k++;
                u++;
            }
            c = max(k,c);

            if(s[j]=='#'){
              k = 0;
            }
        }
        if(c>=3){
            cout<<2<<endl;
        }
        else cout<<u<<endl;
    }
}