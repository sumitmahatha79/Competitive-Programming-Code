#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<pair<long long,long long>>a,b,c;

        for(int i = 0;i<n;i++){
            long long v;
            cin>>v;
            a.push_back({v,i});
        }
        for(int i = 0;i<n;i++){
            long long v;
            cin>>v;
            b.push_back({v,i});
        }
        for(int i = 0;i<n;i++){
            long long v;
            cin>>v;
            c.push_back({v,i});
        }
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        sort(c.rbegin(),c.rend());

        long long ans = 0;
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                for(int k = 0;k<3;k++){

                    if(a[i].second == b[j].second || b[j].second == c[k].second || c[k].second==a[i].second){
                        continue;
                    }
                    else{
                        long long val = a[i].first+b[j].first+c[k].first;
                        ans = max(ans,val);
                    }

                }
            }
        }
        cout<<ans<<endl;
        

    }
    
    


}