#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    // main kaam
    int l = 0;
    int k = n-1;

    int mini = 1;
    int maxi = n;

    bool ok = false;

    while(l<k){
        if(v[l] == mini){
            l++;
            mini++;
        }
        else if(v[l] == maxi){
            l++;
            maxi--;
        }
        else if(v[k] == mini){
            k--;
            mini++;
        }
        else if(v[k] == maxi){
            k--;
            maxi--;
        }
        else{
            ok = true;
            break;
        }
    }
    if(ok == true){
        cout<<l+1<<" "<<k+1<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}