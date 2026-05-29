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

      for(int i = 0;i<n;i++){
         if(v[i] == n){
            swap(v[0],v[i]);
         }
      }

      for(int i = 0;i<n;i++){
         cout<<v[i]<<" ";
      }
      cout<<endl;
   }
}