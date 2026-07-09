#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int k;
        cin>>k;
        vector<int>v(k);
        int cnt3 = 0;
        int cnt2 = 0;
        for(int i = 0;i<k;i++){
            cin>>v[i];
            if(v[i]>=3){
                cnt3++;
            }
            else if(v[i] == 2){
                cnt2++;
            }
        }
        if(cnt3>0 || cnt2>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}