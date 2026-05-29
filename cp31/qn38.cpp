#include<iostream>
using namespace std;
typedef long long ton;

int main(){
ton t;
cin>>t;
while(t--){
ton n;
cin>>n;
vector<ton>arr(n);
for(int i=0;i<n;i++) cin>>arr[i];

ton count=0;
for(int i=0;i<n;i++){
    if(arr[i]==2) count++;
}
if(count==0) cout<<"1"<<endl;
else if(count%2!=0) cout<<"-1"<<endl;
else {

    ton k=0;
    for(int i=0;i<n;i++){
        if(k==count/2){
            cout<<i<<endl;
            break;
        }
        if(arr[i]==2) {
            k++;
        }
    }
    

}

}



    return 0;
}