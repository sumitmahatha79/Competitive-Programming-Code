#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<int>on(n,0);
        vector<int>ro(n,0);
        if(a[0] == '1'){
            on[0] = 1;
        }
        else{
            ro[0] = 1;
        }
        for(int i = 1;i<n;i++){
            if(a[i] == '1'){
                on[i] = on[i-1]+1;
            }
            else{
                on[i] = on[i-1];
            }
        }
        for(int i = 1;i<n;i++){
            if(a[i] == '0'){
                ro[i] = ro[i-1]+1;
            }
            else{
                ro[i] = ro[i-1];
            }
        }
        int tr = 1;
        bool ok = true;
        for(int i = n-1;i>=0;i--){
            if(a[i] == b[i] && tr == 1){
                continue;
            }
            else if(a[i] != b[i] && tr == -1){
                continue;
            }
            else if(a[i] != b[i] && tr == 1){
                if(on[i] == ro[i]){
                    tr = -1;
                }
                else{
                    ok = false;
                    break;
                }
            }
            else if(a[i] == b[i] && tr == -1){
                if(on[i] == ro[i]){
                    tr = 1;
                }
                else{
                    ok = false;
                    break;
                }
            }
            else {
                ok = false;
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