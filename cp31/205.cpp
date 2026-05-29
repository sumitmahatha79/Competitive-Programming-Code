#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];

        int l = 0;
        int j = n-1;
        int a = -1;
        int b = -1;;
        while(l<j){
            if(v[l] != v[j]){
                a = v[l];
                b = v[j];
                break;
            }
            else{
                l++;
                j--;
            }
        }
        if(a== -1 || b== -1){
            cout<<"YES"<<endl;
        }
        else{
            vector<int>p;
            for(int i = 0;i<n;i++){
                if(v[i] != a){
                    p.push_back(v[i]);
                }
            }
            vector<int>q;
            for(int i = 0;i<n;i++){
                if(v[i] != b){
                    q.push_back(v[i]);
                }
            }

            bool ok = true;
            int l = 0;
            int k = p.size()-1;
            while(l<k){
                if(p[l] != p[k]){
                    ok = false;
                    break;
                }
                else{
                    l++;
                    k--;
                }
            }

            bool uk = true;
            int f = 0;
            int o = q.size()-1;
            while(f<o){
                if(q[f] != q[o]){
                    uk = false;
                    break;
                }
                else{
                    f++;
                    o--;
                }
            }

            if(ok == true || uk == true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}