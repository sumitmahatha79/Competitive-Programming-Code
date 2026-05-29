#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        vector<int>u = v;
        sort(u.rbegin(),u.rend());
        int k = 0;
        int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] >= k) {
                cnt++;
                k = v[i];
        }
    }
       cout<<cnt<<endl;
        
    }

}
