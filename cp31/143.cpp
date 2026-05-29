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
        sort(va.begin(),va.end());
        vector<int>u = v;
        int tr = 0;
        for(int i = 0;i<m;i++){
            int b , c;
            cin>>b>>c;
            b--;
            va[i][0] = b;
            va[i][1] = c;
 
             u[va[i][0]] += va[i][1];
             if(u[va[i][0]]>h){
                
             // reverse deletation
                for(int j = i;j>=tr;j--){
                    int i1 = va[j][0];
                    int v1 = va[j][1];
                    u[i1] -= v1;
                }
                tr = i+1;
 
            }
        }
        for(auto ele : u){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}