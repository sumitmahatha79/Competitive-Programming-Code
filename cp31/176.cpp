#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        vector<vector<int>>v(n,vector<int>(n));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin>>v[i][j];
            }
        }
        int l = 0;
        int h = n-1;
        int cnt = 0;
        while(l<=h){
            if(l == h){
                int ex = 0;
                for(int i=0;i<n;i++){
                    if(v[l][i] != v[h][n-1-i]){
                        ex++;
                    }
                }
                cnt+=(ex/2);
            }
            else{
                for(int i=0;i<n;i++){
                    if(v[l][i] != v[h][n-1-i]) cnt++;
                }
            }
            l++;
            h--;
        }
        if(cnt<=k){
            int di = k-cnt;
            if(di%2 !=0 && n%2==0){
                cout<<"NO"<<endl;
            }
            else {
            cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}