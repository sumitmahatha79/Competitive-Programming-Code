#include<iostream>
using namespace std;
typedef long long tushar;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int ind = -1;
        int mini = INT_MAX;
        int mini1 = INT_MAX;
        vector<vector<int> >v(n);
        for(int i = 0;i<n;i++){
            int m;
            cin>>m;
            for(int j = 0;j<m;j++){
                int nu;
                cin>>nu;
                v[i].push_back(nu);
            }
            sort(v[i].begin(),v[i].end());
            mini = min(v[i][1],mini);
            mini1 = min(v[i][0],mini1);
            if(mini == v[i][1]){
                ind = i;
            } 
        }
        tushar sum = 0;
        for(int i = 0;i<n;i++){
            if(i==ind){
                sum+=mini1;
            }
            else{
                sum+=v[i][1];
            }
        }
        cout<<sum<<endl;

    }
    
}