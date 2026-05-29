// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1;i<=t;i++){
//         long long n;
//         cin>>n;
//         vector<int>v;
//         for(int i = 1;i<=n;i++){
//             if(n%i == 0){
//                 v.push_back(i);
//             }
//         }
//         int ans = 0;
//         int ch = 0;
//         for(int i = 0;i<v.size();i++){
//             int val = v[i];
//             for(int j = 1;j<=100;j++){
//                 if(val % n == 0){
//                     ans = v[i];
//                     ch = 1;
//                     break;
//                 }
//                 else{
//                     val*=val;
//                 }
//             }
//             if(ch == 1){
//                 break;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long temp = n;
        long long k = 1;

        for(long long i = 2; i * i <= temp; i++){
            if(temp % i == 0){
                k *= i;
                while(temp % i == 0)
                    temp /= i;
            }
        }

        if(temp > 1)
            k *= temp;

        cout << k << "\n";
    }
}