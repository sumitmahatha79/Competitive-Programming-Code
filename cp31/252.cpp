#include<iostream>
#include<unordered_map>
using namespace std;
void solve(){
    int n;
    cin>>n;
   unordered_map<long long,long long>m;
   m.reserve(2*n);
   for(int i = 0;i<n;i++){
    long long a;
    cin>>a;
    m[a]++;
   }
   vector<pair<long long,long long>>p;
   for(auto ele : m){
    p.push_back({ele.first,ele.second});
   }
   sort(p.begin(),p.end());

   vector<long long>ch;
   for(int i = 0;i<(p.size()-1);i++){
    if((p[i].first+1) != p[i+1].first && p[i].first != p[i+1].first){
        ch.push_back(i+1);
    }
   }
   ch.push_back(p.size());
   int cnt = 0;
   int st = 0;
   for(int i = 0;i<ch.size();i++){
    long long maxi = 0;
    for(int j = st;j<ch[i];j++){
        if(j == st){
            maxi +=p[j].second;
        }
        else{
            if(p[j].second>p[j-1].second){
                maxi += (p[j].second - p[j-1].second);
            }
        }
    }
    cnt += maxi;
    st = ch[i];
   }
   cout<<cnt<<"\n";
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}