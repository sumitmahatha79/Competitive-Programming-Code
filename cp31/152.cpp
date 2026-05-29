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
        vector<int>idx;
        for(int i = 0;i<n-1;i++){
            if(v[i]%2==0){
                if(v[i+1]%2==0){
                    idx.push_back(i);
                }
            }
            else if(v[i]%2!=0){
                if(v[i+1]%2!=0){
                    idx.push_back(i);
                }
            }
        }
        if(idx.size()==0){
            int cu = v[0];
            int mxi = v[0];
            for(int i = 1;i<n;i++){
                cu = max(v[i],v[i]+cu);
                mxi = max(mxi,cu);
            }
            cout<<mxi<<endl;
        }
        else {
        int cu = v[0];
        int mxi = v[0];
        for(int i = 1;i<=idx[0];i++){
            cu = max(v[i],(v[i]+cu));
            mxi = max(mxi,cu);
        }
        cu = v[idx[idx.size()-1]+1];
        int mxii = v[idx[idx.size()-1]+1];
        for(int i = idx[idx.size()-1]+2;i<n;i++){
            cu = max(v[i],(v[i]+cu));
            mxii = max(mxii,cu);
        }
        int mxiii = INT_MIN;
        for(int i = 0;i<idx.size()-1;i++){
            cu = v[idx[i]+1];
            mxiii = max(mxiii,v[idx[i]+1]);
            for(int j = idx[i]+2;j<=idx[i+1];j++){
                cu = max(v[j],(v[j]+cu));
                mxiii = max(mxiii,cu);
            }
        }
        int ans = max({mxi,mxii,mxiii});
        cout<<ans<<endl;
    }
}
}