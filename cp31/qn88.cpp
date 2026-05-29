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
        int ii = 0;
        int jj = 0;
        int kk = 0;
        bool flag = false;
        for(int i = 1;i<n-1;i++){
            if((v[i-1]<v[i]) && (v[i]>v[i+1])){
                ii = i-1;
                jj = i;
                kk = i+1;
                flag = true;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            cout<<ii+1<<" "<<jj+1<<" "<<kk+1<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}