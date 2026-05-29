#include<iostream>
using namespace std;
int main(){
    vector<int>v(3);
    cin>>v[0];
    cin>>v[1];
    cin>>v[2];
    sort(v.begin(),v.end());
    if(v[2]-v[0]>=10){
        cout<<"check again";
    }
    else {
        cout<<"final"<<" "<<v[1];
    }
}