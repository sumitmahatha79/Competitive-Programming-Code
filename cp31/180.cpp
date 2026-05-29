#include<iostream>
using namespace std;
void solve(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        if(v[0]<0){
            if(abs(v[0])>=v[1]){
                v[0] = abs(v[0]);
                v[1] = -v[1];
            }
        }
        if(v[n-1]<0){
            if(abs(v[n-1])>=v[n-2]){
                v[n-1] = abs(v[n-1]);
                v[n-2] = -v[n-2];
            }
        }
        for(int i = 1;i<n-1;i++){
            if(v[i]<0){
                if(abs(v[i])>min(v[i-1],v[i+1])){
                    if(min(v[i-1],v[i+1]) == v[i-1]){
                        v[i] = abs(v[i]);
                        v[i-1] = -v[i-1];
                    }
                    else{
                        v[i] = abs(v[i]);
                        v[i+1] = -v[i+1];
                    }
                }
            }
        }
        long long sum = 0;
        for(int i = 0;i<n;i++){
            sum += v[i];
        }
        cout<<sum<<endl;
    }
    return;
}
int main(){
    solve();
}