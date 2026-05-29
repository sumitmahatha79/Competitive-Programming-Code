#include<iostream>
#include<set>
using namespace std;
typedef long long ll;
// sort comparator
bool comp(pair<long long,long long>a,pair<long long,long long>b){
    if(a.first == b.first){
        return a.second < b.second; // increasing order
    }
    else{
        return a.first > b.first; // decreasing order
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n,k;
        cin>>n>>k;
        vector<pair<long long,long long> >v(n);
        for(int i = 0;i<n;i++){
            ll va;
            cin>>va;
            ll re = va%k;
            if(re==0){
                v[i] = {k,i+1};
            }
            else{
            v[i] = {re,i+1};
            }
        }
        sort(v.begin(),v.end(),comp);

        // printing 
        for(int i = 0;i<n;i++){
            cout<<v[i].second<<" ";
        }
        cout<<endl;

    }
}