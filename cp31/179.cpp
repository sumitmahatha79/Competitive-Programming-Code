#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
       
        vector<int>p(n+1),ch(n+1);
        for(int i = 1;i<=n;i++){
            cin>>p[i];
            ch[p[i]] = i;
        }
        vector<int>c(n);
        for(int i = 0;i<n;i++){
            cin>>c[i];
        }
        
        bool ok = true;
        for(int i = 0;i<(c.size()-1);i++){
            if(ch[c[i]]>ch[c[i+1]]){
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