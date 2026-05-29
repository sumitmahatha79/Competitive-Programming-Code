#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b,xk,yk,xq,yq;
        cin>>a>>b;
        cin>>xk>>yk;
        cin>>xq>>yq;
        set<pair<int,int>> mk;
        set<pair<int,int>> mq;

        // queen kha kha se attack hogi
            
            mq.insert({xq+a,yq+b});
            mq.insert({xq+b,yq+a});
            mq.insert({xq-a,yq+b});
            mq.insert({xq-b,yq+a});
            mq.insert({xq-a,yq-b});
            mq.insert({xq-b,yq-a});
            mq.insert({xq+a,yq-b});
            mq.insert({xq+b,yq-a});

            // king kha kha se attack hoga
            
            mk.insert({xk+a,yk+b});
            mk.insert({xk+b,yk+a});
            mk.insert({xk-a,yk+b});
            mk.insert({xk-b,yk+a});
            mk.insert({xk-a,yk-b});
            mk.insert({xk-b,yk-a});
            mk.insert({xk+a,yk-b});
            mk.insert({xk+b,yk-a});


            int cnt = 0;
            for(auto ele:mk){
                if(mq.find(ele)!=mq.end()){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        
    }
}