#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,q;
        cin>>n>>q;
        int sum = 0;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        
        // prifix sum
        vector<int>p(n+1,0);
        for(int i = 0;i<n;i++){
            p[i+1] = p[i]+v[i];
        }
        //

        for(int i = 1;i<=q;i++){
            int l,r,k;
            cin>>l>>r>>k;
            int le = (r-l)+1;
            int su = k*le;
            int suu = 0;
            suu = p[r]-p[l-1];//** 
            int summ = sum - suu + su;
            if(summ%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}