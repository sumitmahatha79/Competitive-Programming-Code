#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt = 0;
        int sum = 0;
        int psum = 0;
        int nsum = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
            sum+=a;
            if(a==(-1)){
                cnt++;
                nsum+=(-1);
            }
            else{
                psum+=1;
            }
        }
        if(sum>=0 && cnt%2==0){
            cout<<0<<endl;
        }
        else if(sum>=0 && cnt%2!=0){
            cout<<1<<endl;
        }
        else if(sum<0){ 
            int j = n-cnt;
            int u = cnt;
            int ans = 0;
            while(u>j){
                j++;
                u--;
                ans++;
            }
            if(u%2==0){
                cout<<ans<<endl;
            }
            else {
                cout<<ans+1<<endl;
            }

        }
    }
}