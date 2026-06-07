#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        bool ok = true;
        for(int i = 2;i<n;i++){
            if(v[i-2]%v[i-1] != v[i]){
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout<<v[0]<<" "<<v[1]<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}