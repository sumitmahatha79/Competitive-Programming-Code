#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        set<int>s;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            s.insert(a);
        }
        vector<int>v;
        for(auto ele : s){
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        if(v.size()==1){
            cout<<1<<endl;
        }
        else{
        int cnt = 0;
        int maxi = 0;
        int a = 0;
        for(int i = 1;i<v.size();i++){
            if(v[i]-v[i-1] == 1){
                cnt++;
                maxi = max(cnt,maxi);
                a = 1;
            }
            else{
                cnt = 0;
            }
        }
        if(a == 0){
            cout<<1<<endl;
        }
        else{
        cout<<maxi+1<<endl;
        }
    }

        
    }
}