#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int va = min(h,l);
        int vc = max(h,l);
        int cnt = 0;
        int idx = -1;
        for(int i = 0;i<(n/2);i++){
            if(va>=v[i]){
                cnt++;
                idx = i;
            }
        }
        int ant = 0;
        for(int i = idx+1;i<n;i++){
            if(vc>=v[i]){
                ant++;
            }
        }
        if(ant == 0){
            cout<<cnt/2<<endl;
        }
        else if(min(ant,cnt)==ant){
            cout<<((ant+cnt)/2)<<endl;
        }
        else{
            cout<<min(ant,cnt)<<endl;
        }
    }
}