#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        char c;
        cin>>n;
        cin>>c;
        string s;
        cin>>s;
        string ss = s+s;
        
        int maxi = 0;
        int idx = -1;
        for(int i = ss.size()-1;i>=0;i--){
            if(ss[i]=='g'){
                idx = i;
            }
            if(ss[i]==c && idx!=(-1)){
                int a = idx-i;
                maxi = max(maxi,a);
            }
        }
        cout<<maxi<<endl;
    }
}