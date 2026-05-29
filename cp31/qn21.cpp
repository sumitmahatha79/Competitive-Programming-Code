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
            int a;
            cin>>a;
            v[i]=a;
        }
        vector<int>u;
        u.push_back(v[0]);
        for(int i = 1;i<n;i++){
            if(v[i-1]<=v[i]){
                u.push_back(v[i]);
            }
            else{
                u.push_back(v[i]);
                u.push_back(v[i]);
            }
        }
        int s = u.size();
        cout<<s<<endl;
        for(int i = 0;i<s;i++){
            cout<<u[i]<<" ";
        }
    }
}