#include<iostream>
using namespace std;
void solve(){
    long long x,y;
    cin>>x>>y;
    if(x<0 && y<0){
        vector<int>v;
        for(int i = y;i<=x;i++){
            v.push_back(i);
        }
        for(int i = x-1;i>(y);i--){
            v.push_back(i);
        }

        cout<<v.size()<<endl;
        for(int i = 0;i<(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else if(x>0 && y>0){
        vector<int>v;
        for(int i = y;i<=x;i++){
            v.push_back(i);
        }
        for(int i = x-1;i>(y);i--){
            v.push_back(i);
        }

        cout<<v.size()<<endl;
        for(int i = 0;i<(v.size());i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
    int n = 2*(abs(x)+abs(y));
    vector<long long>v(n);

    if(y%2 != 0){
        for(int i = 0;i<(2*abs(x));i++){
            if(i%2==0){
                if(x<0){
                    v[i] = -1;
                }
                else{
                    v[i] = 1;
                }
            }
            else{
                v[i] = 0;
            }
        }
        for(int i = (2*(abs(x)));i<(n);i++){
            if(i%2==0){
                if(y<0){
                    v[i] = -1;
                }
                else{
                    v[i] = 1;
                }
            }
            else{
                v[i] = 0;
            }
        }
    }
    else{
        for(int i = 0;i<(2*abs(x));i++){
            if(i%2==0){
                v[i] = 0;
            }
            else{
                if(x<0){
                    v[i] = -1;
                }
                else{
                    v[i] = 1;
                }
            }
        }
        for(int i = (2*(abs(x)));i<(n);i++){
            if(i%2==0){
                v[i] = 0;
            }
            else{
                if(y<0){
                    v[i] = -1;
                }
                else{
                    v[i] = 1;
                }
            }
        }
    }
    cout<<n<<endl;

    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}