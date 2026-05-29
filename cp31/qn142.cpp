#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];

        vector<vector<int>> va(m, vector<int>(2));
        vector<int>u = v;
        vector<int>p(n,-1);
        for(int i = 0;i<m;i++){
            int b , c;
            cin>>b>>c;
            va[i][0] = b;
            va[i][1] = c;

             u[va[i][0]-1] += va[i][1];
             if(u[va[i][0]-1]>h){
             p[va[i][0]-1] = 1;

            }
        }int o = -1;
        for(int i = n-1;i>=0;i--){
            if(p[i]==1){
                o = i;
                break;
            }
        }
        for(int i = 0;i<=o;i++){
            cout<<v[i]<<" ";
        }
        for(int i = o+1;i<n;i++){
            cout<<u[i]<<" ";
        }
        cout<<endl;
    }
}