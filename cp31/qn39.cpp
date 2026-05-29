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
       // sort(v.begin(),v.end());
        if(v[0]==v[n-1]){
            cout<<"NO"<<endl;
        }
        else{
            reverse(v.begin(),v.end());
            for(int i = 1;i<n;i++){
                if(v[0]!=v[i]){
                    swap(v[0],v[i]);
                    break;
                }
            }
            cout<<"Yes"<<endl;
            for(int i = 0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}