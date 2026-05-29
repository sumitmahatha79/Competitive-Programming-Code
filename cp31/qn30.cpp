#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n , k , x;
        cin>>n>>k>>x;

        int cnt = 0;
        for(int i = 1;i<=n;i++){
            if(n%i==0){
                cnt++;
            }
        }// 3 3 1
        if(x!=1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 1;i<=n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(n%2==0 && k>=2){
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i = 1;i<=(n/2);i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            
        }
        else if(n%3==0 && k>=3){
                cout<<"YES"<<endl;
                cout<<n/3<<endl;
                for(int i = 0;i<(n/3);i++){
                    cout<<3<<" ";
                }
                cout<<endl;
            
        }
        else if(n%2!=0 && n%3!=0 && k>=3){
            cout<<"YES"<<endl;
            int f = n-3;
            int no = f/2;
            cout<<no+1<<endl;
            cout<<3<<" ";
            for(int i = 1;i<=no;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
}//9 