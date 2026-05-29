#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long a,b,n;
        cin>>a>>b>>n;
        // int ne = n;
        // unordered_set<int>s1;
        // while(ne>0){
        //     int val = min(a,b*ne);
        //     if(val == a && val!=b*ne){
        //     s1.insert(val);
        //     }
        //     else{
        //         s1.insert(val/ne);
        //     }
        //     ne--;
        // }
        // int ans1 = s1.size();
        // cout<<ans1<<endl;

        if(a>=(b*n)){
            cout<<1<<endl;
        }
        else if(a<=b){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}