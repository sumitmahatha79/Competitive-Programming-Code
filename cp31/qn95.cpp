#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    mux t;
    cin>>t;
    for(mux i = 1;i<=t;i++){
        mux n,p;
        cin>>n>>p;
    
    vector<mux>p1(n);
    for(mux i = 0;i<n;i++){
        cin>>p1[i];
    }
    vector<mux>p2(n);
    for(mux i = 0;i<n;i++){
        cin>>p2[i];
    }
    vector<pair<mux,mux>>pe(n);
    for(mux i = 0;i<n;i++){
        pe[i].second = p1[i];
        pe[i].first  = p2[i];
    }
    sort(pe.begin(),pe.end());
    mux sum = p;
    mux cnt = n-1;
    for(mux i = 0;i<n-1;i++){
        if((pe[i].first)<p){
            if(pe[i].second<(cnt)){
                sum+=((pe[i].first)*(pe[i].second));
                cnt-=(pe[i].second);
            }
            else{
                sum+=((pe[i].first)*(cnt));
                break;
            }
        }
        else{
            sum+=(p*cnt);
            break;
        }
    }
    cout<<sum<<endl;

    }
    
}