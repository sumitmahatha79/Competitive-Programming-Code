#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        vector<int>u(n);
        for(int i = 0;i<n;i++){
            cin>>u[i];
        }
        int sum = 0;
        int k = n;
        while(k!=0){
        int mini = INT_MAX;
        for(int i = 0;i<k;i++){
            mini = min(mini,u[i]);
        }
        int idx = -1;
        for(int i = 0;i<k;i++){
            if(mini == u[i]){
                idx = i;
                break;
            }
        }
        for(int i = idx;i<k;i++){
            sum += (mini*v[i]);
        }
        k-=(abs(idx-k));
    }
    cout<<sum<<endl;

    }
}