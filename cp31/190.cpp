#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        map<int,int>m;
        for(int i = 1;i<=n;i++){
            int a;
            cin>>a;
            m[a]++;
        }
        int ans = 0;
        for(auto ele : m){
            if(ele.second>=2){
                ans += (ele.second/2);
            }
        }
        cout<<ans<<endl;

    }
}