#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];
        vector<int>u(n);
        for(int i = 0;i<n;i++)cin>>u[i];
        
        int l = -1;
        int k = -1;
        for(int i = 0;i<n;i++){
            if(v[i] != u[i]){
                l = i;
                break;
            }
        }
        for(int i = n-1;i>=0;i--){
            if(v[i] != u[i]){
                k = i;
                break;
            }
        }
        int lcnt = 0;
        for(int i = l;i>0;i--){
            if(u[i]==u[i-1] || u[i]>u[i-1]){
                lcnt--;
            }
            else{
                break;
            }
        }
        int kcnt = 0;
        for(int i = k;i<n-1;i++){
            if(u[i] == u[i+1] || u[i]<u[i+1]){
                kcnt++;
            }
            else{
                break;
            }
        }
        cout<<l+lcnt+1<<" "<<k+kcnt+1<<endl;
    }
}