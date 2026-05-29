#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        string s;
        cin>>s;
        int n = s.size();
        //if(n%2!=0){
          //  s = s + "-1";
        //}
        // string h = "NET";
        // for(int i = 0;i<n-1;i+=2){
        //     if(i%4==0){
        //         if((s[i]=='1' && s[i+1]=='0')||s[i]=='0'&&s[i+1]=='1'){
        //             h = "DA";
        //         }
        //         else{
        //             h = "NET";
        //             break;
        //         }
        //     }
        //     else{
        //         if((s[i]=='1' && s[i+1]=='0')||s[i]=='0'&&s[i+1]=='1'){
        //             h = "NET";
        //         }
        //         else{
        //             h = "DA";
        //             break;
        //         }
        //     }
        // }
        // cout<<h<<endl;
        int noz = 0;
        int noo = 0;
        for(int i = 0;i<n;i++){
            if(s[i]=='0'){
                noz++;
            }
            else{
                noo++;
            }
        }
        int ans = min(noz,noo);
        if(ans%2==0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }

    }
}