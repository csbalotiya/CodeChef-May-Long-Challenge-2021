#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    long long t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        long long ans= 0;
        vector<long long>mod(n+1,1);
        for(ll i = 2 ; i <= n; i++){
            ll a = m%i;
            ans += mod[a];
            for(ll j = a; j <= n; j+=i){
                    mod[j]++;
            }
        }
    cout<<ans<<"\n";
    }
    return 0;
}
