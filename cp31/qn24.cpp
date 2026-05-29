#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v(n,0);
        int cnt = 0;
        
    if(n%2==0){
        int j = 0;
        while(j<(n/2)){
            if(s[j]==s[n-j-1]){
                continue;
            }
            else {
                v[j]++;
                v[n-j-1]++;
                cnt+=2;
            }
            j++;
        }
    }
    else{
        int k = 0;
        while(k<(n/2)+1){
            if(s[k]==s[n-k-1]){
                continue;
            }
            else {
                v[k]++;
                v[n-k-1]++;
                if(i==(n/2)+1){
                    cnt++;
                }
                else cnt+=2;
            }
            k++;
        }

    }
        // int cnt = 0;
        // for(int i = 0;i<=n;i++){
        //     if(v[i]!=0){
        //         cnt++;
        //     }
        // }
        cout<<cnt<<endl;
        for(int i = 0;i<=n;i++){
            if(v[i]!=0){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;

    }
}