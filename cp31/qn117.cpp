#include<iostream>
#include<map>
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
        map<int,int>m;
        for(int i = 0;i<n;i++){
            m[v[i]]++;
        }
        int a = -1;
        for(auto ele : m){
            if(ele.second == 1){
                a = 1;
                break;
            }
        }
        if(a == 1){
            cout<<(-1)<<endl;
        }
        else{
            vector<int>u;
            for(auto ele : m){
                u.push_back(ele.second);
            }
            vector<int>ans;
            for(int i = 1;i<=n;i++){
                ans.push_back(i);
            }
            int j = 0;
            for(int i = 0;i<u.size();i++){
                if(u[i]%2==0){
                    reverse(ans.begin()+j,ans.begin()+(u[i]+j));
                    j += u[i];
                }
                else{
                    reverse(ans.begin()+j,ans.begin()+(u[i]+j));
                    int o = (u[i]/2)+1;
                    swap(ans[o+j-1],ans[u[i]+j-1]);
                    j += u[i];

                }
            }
            for(int i = 0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        


    }
}