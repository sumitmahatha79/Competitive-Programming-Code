#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        vector<pair<long long,long long>>m;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            m.push_back({v[i],i+1});
        }
        sort(m.begin(),m.end());
        int cnt = 0;
        // tle soution
        // for(int i = 0;i<(n-1);i++){
        //     for(int j = i+1;j<n;j++){
        //         if((v[i]*v[j]) == (i+j+2)){
        //             cnt++;
        //         }
        //     }
        // }
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                if(m[j].first*m[i].first == m[j].second+m[i].second){
                    cnt++;
                }
                else if(m[j].first*m[i].first > 2*n){
                    break;
                }
            }
        }

        cout<<cnt<<endl;
    }
}