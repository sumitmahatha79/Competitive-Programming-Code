#include<iostream>
using namespace std;
void fun(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
    int n;
    cin>>n;
    int maxi = INT_MIN;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
        maxi = max(v[i],maxi);
    }
    vector<int>u;
    int ch = 0;
    int bh = 0;
    for(int i = 0;i<n;i++){
        if(v[i] == maxi){
            u.push_back(2);
            ch = 1;
        }
        else{
            u.push_back(1);
            bh = 1;
        }
    }
    if(bh == 0 || ch == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i = 0;i<n;i++){
            cout<<u[i]<<" ";
        }
        cout<<endl;
    }
}
}
int main(){
    fun();
}