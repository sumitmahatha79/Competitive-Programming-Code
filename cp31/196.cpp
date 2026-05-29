#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long u = n;
        long long sum = 0;
        vector<int>v;
        while(u>0){
            int a = u%10;
            sum+=a;
            v.push_back(a);
            u/=10;
        }

        int vs = v[v.size()-1];
        int vnt = 0;
        for(int i = 0;i<v.size();i++){
            if(vs == v[i]){
                vnt++;
            }
        }
            sort(v.begin(),v.end());
            int cnt = 0;
            for(int i = v.size()-1;i>=0;i--){
                if(sum/10 == 0){
                    break;
                }
                else{
                    if(v[i] == vs && vnt == 1){
                        sum-=v[i];
                        sum+=1;
                        cnt++;
                    }
                    else if(v[i]==vs && vnt != 1){
                        sum-=v[i];
                        cnt++;
                        vnt--;
                    }
                    else{
                    sum-=v[i];
                    cnt++;
                    }
                }
            }
            cout<<cnt<<endl;
    }

}