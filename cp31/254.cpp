#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i =1;i<=t;i++){
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        for(int i = 0;i<n;i++)cin>>b[i];
        bool ok = true;
        int lo = n - k;
        int hi = k - 1;
        bool uk = (lo <= hi);
        for(int j = 0; j < n && ok; j++) {
            bool bk = uk && (j >= lo && j <= hi);
            if(!bk) {
                if(b[j] != -1 && b[j] != a[j]) {
                    ok = false;
                }
            }
        }
        if(ok && uk) {
            map<int,int> fr;
            for(int j = lo; j <= hi; j++) fr[a[j]]++;
            int w = 0;
            for(int j = lo; j <= hi && ok; j++) {
                if(b[j] == -1) w++;
                else {
                    if(fr[b[j]] > 0) fr[b[j]]--;
                    else ok = false;
                }
            }
            if(ok) {
                int rem = 0;
                for(auto &[v,c] : fr) rem += c;
                if(rem != w) ok = false;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{/**/
            cout<<"NO"<<endl;
        }
    }
}