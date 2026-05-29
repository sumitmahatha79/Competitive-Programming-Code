#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        unordered_map<long long,long long>m;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            m[a]++;
        }
        bool flag = false;
        for(auto ele : m){
            int b = ele.second;
            if(b>1){
                flag = true;
                break;
            }
        }
        if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}