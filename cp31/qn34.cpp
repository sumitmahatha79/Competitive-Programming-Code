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
        int maxi = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            int b = v[i];
            if(b==0){
                maxi++;
                ans = max(ans,maxi);
            }
            else{
                maxi = 0;
            }
        }
        cout<<ans<<endl;
    }
}