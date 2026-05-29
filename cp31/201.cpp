#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        reverse(v.begin(),v.end());
        int ch = 0;
        for(int i = 2;i<=n;i++){
            if(v[1] != v[i]){
                ch = i;
                break;
            }
        }
        if(ch == 0){
            cout<<0<<endl;
        }
        else{
        int cnt = 0;
        int c = 1;
        while(c != (n)){
            int p = 1;
            for(int i = ch;i<=min(n,(2*(ch-1)));i++){
                v[i] = v[1];
                if(p == 1){
                    cnt++;
                    p = 2;
                }
                c = i;
            }

            for(int i = (2*(ch-1))+1;i<=n;i++){
                if(v[1] != v[i]){
                    ch = i;
                    break;
                }
                c = i;
            }
            
        }

        cout<<cnt<<endl;
    }   
    }
}