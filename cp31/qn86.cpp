#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,x;
        cin>>n>>x;
        vector<int>v(n);
        long long maxi = 0;
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sum += v[i];
            if(v[i]%x==0){
            maxi += (v[i]/x);
            }
            else{
                maxi += (v[i]/x)+1;
            }
        }
        long long mini = 0;
        if(sum%x==0){
            mini = sum/x;
        }
        else{
            mini = (sum/x)+1;
        }
        
       
        cout<<mini<<" "<<maxi<<endl;
    }
}