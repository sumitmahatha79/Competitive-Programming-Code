#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        map<int,int>m;
        for(int i = 0;i<=k;i++){
            m[i] = 0;
        }
        for(int i = 0;i<n;i++){
            if(v[i]>k){
                break;
            }
            else{
                m[v[i]]++;
            }
        }
        int cnt = 0;
        int bnt = 0;
        for(auto ele : m){
            if(ele.second == 0 && ele.first<k){
                cnt++;
            }
            else if(ele.first == k){
                bnt = ele.second;
            }
        }

        cout<<max(bnt,cnt)<<endl;
        
    }
}