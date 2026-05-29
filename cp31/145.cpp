#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt = 0;
        vector<int>v;
        for(int i = 0;i<n;i++){
           if(s[i]=='1'){
            v.push_back(i);
           }
        }
        if(v.size()==0){
            cout<<n<<endl;
        }
        else{
        cnt += (v[0]-0);
        if(n-v[v.size()-1]-1>k){
            cnt+=((n-v[v.size()-1]-1 - k));
        }
        for(int i = 1;i<v.size();i++){
            if((v[i]-v[i-1])-1>k){
                cnt+=((v[i]-v[i-1])-1-k);
            }
        }

        cout<<cnt<<endl;
    }

    }
}