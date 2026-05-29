#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        // int indmax = -1;
        // int indmin = -1;
        // int maxi = INT_MIN;
        // int  mini = INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int a = v[n-1]-v[0];
        int b = INT_MIN;
        int c = INT_MIN;
        int d = INT_MIN;
        for(int i = 0;i<n;i++){
            b = max(b,(v[n-1]-v[i]));
            c = max(c,(v[i]-v[0]));
        }
        for(int i = 0;i<n-1;i++){
            d = max(d,(v[i]-v[i+1]));
        }
        int ans = max({a,b,c,d});
        cout<<ans<<endl;

            // if(v[i]>maxi){
            //     maxi = v[i];
            //     indmax = i;
            // }
            // if(v[i]<mini){
            //     mini = v[i];
            //     indmin = i;
            // }
        
        // if(indmin == 0 || indmax == (n-1)){
        //     cout<<maxi-mini<<endl;
        // }
        // int a = v[0];
        // if(ind != (n-1)){
        //     if(a<v[ind+1]){
        //         cout<<v[ind]-a<<endl;
        //     }
        //     else {
        //         cout<<v[ind]-v[ind+1]<<endl;
        //     }
        // }
        // else{
        //     cout<<v[ind] - a<<endl;
        // }
        // else if(v[0]>v[indmax+1]){
        //     cout<<v[indmax]-v[indmax+1]<<endl;
        // }
        // else{
        //     cout<<v[indmax]-v[0]<<endl;
        // }
    }   
}