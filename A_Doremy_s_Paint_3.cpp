#include<iostream>
#include <map>
using ll=long long;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    map<ll,ll>freq_map;
    for(int i=0;i<n;i++){
        freq_map[a[i]]++;

    }
    if(freq_map.size()>=3) cout<<"NO\n";
    else{
        ll freq_1=freq_map.begin()->second;
        ll freq_2=freq_map.rbegin()->second;
        if(freq_1==freq_2) cout<<"Yes\n";
        else if(n%2==1 && abs(freq_1-freq_2)==1) cout<<"Yes\n";
        else cout<<"No\n";

    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        
    }
    return 0;
}