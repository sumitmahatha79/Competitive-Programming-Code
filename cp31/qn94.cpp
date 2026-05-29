#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        bool flag = false;
        int ev = 0;
        int ans;
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]==k || v[i]%k==0){
                flag = true;
            }
            if(v[i]%2==0){
                ev++;
            }
            int val = v[i]%k;
            maxi = max(maxi,val);
        }

        if(flag == true){
            cout<<0<<endl;
        }
        else if(k==4){
           if(ev>=2){
                cout<<0<<endl;
            }
            else{
                ans = 2-ev;
                cout<<min(ans,(k-maxi))<<endl;
            }
        }
        else{
            cout<<k-maxi<<endl;
        }
    }
}