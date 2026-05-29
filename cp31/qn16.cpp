#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int se = 0;
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            v[j]=a;
            if(a==k){
                se++;
            }

        }
        if(se!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}