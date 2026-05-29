#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        
        int n,x,k;
        cin>>n>>x>>k;
        x+=(k*100);
        vector<int>v(n);
        int cnt = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
            if(x<a)cnt++;
        }
        cnt-=k;
        cout<<cnt+1<<endl;
        
        
    }
}
