#include<iostream>
using namespace std;
int main(){
    long long n,q;
    cin>>n>>q;

    deque<int>v(n);
    for(int i = 0;i<n;i++)cin>>v[i];
    vector<int>u(q);
    for(int i = 0;i<q;i++)cin>>u[i];

    vector<int>ans;
    for(int i = 0;i<q;i++){
        int val = u[i];
        int cnt = 0;
        for(int j = 0;j<v.size();j++){
            if(v[j] == -1)cnt++;
            if(v[j] == val){
                ans.push_back(j+1-cnt);
                v[j] = -1;
                v.push_front(val);
                break;
            }
        }
    }

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}