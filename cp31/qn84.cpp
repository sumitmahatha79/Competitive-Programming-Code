#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        mux m,n,k,j;
        cin>>m>>n>>k>>j;
        // mux d1 = abs((k-1)*(k-1)) + abs((j-1)*(j-1));
        // mux d2 = abs((k-m)*(k-m)) + abs((j-1)*(j-1));
        // mux d3 = abs((k-1)*(k-1)) + abs((j-n)*(j-n));
        // mux d4 = abs((k-m)*(k-m)) + abs((j-n)*(j-n));

        // mux maxi = max({d1,d2,d3,d4});
        // for(int i = 1;i<=4;i++){
            
        // }
        cout<<1<<" "<<1<<" "<<m<<" "<<n<<endl;
    }
}