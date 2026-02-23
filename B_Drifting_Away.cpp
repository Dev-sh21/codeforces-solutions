#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; if(!(cin>>t)) return 0;
    while(t--){
        string s; cin>>s;
        int n = (int)s.size();
        vector<vector<int>> rev(n+1); 
        vector<int> out_in(n+1,0);    
        for(int i=1;i<=n;i++){
            char c = s[i-1];
            if(c == '<'){
                if(i-1 >= 1){ rev[i-1].push_back(i); out_in[i]++; }
            } else if(c == '>'){
                if(i+1 <= n){ rev[i+1].push_back(i); out_in[i]++; }
            } else { 
                if(i-1 >= 1){ rev[i-1].push_back(i); out_in[i]++; }
                if(i+1 <= n){ rev[i+1].push_back(i); out_in[i]++; }
            }
        }
        queue<int> q;
        vector<int> dp(n+1,0), seen(n+1,0);
        for(int i=1;i<=n;i++){
            if(out_in[i]==0){ q.push(i); dp[i]=1; seen[i]=1; }
        }
        int processed = 0;
        while(!q.empty()){
            int v = q.front(); q.pop();
            processed++;
            for(int p: rev[v]){
                if(dp[p] < dp[v] + 1) dp[p] = dp[v] + 1;
                out_in[p]--; 
                if(out_in[p]==0 && !seen[p]){
                    seen[p]=1;
                    q.push(p);
                }
            }
        }
        if(processed < n){
            cout << -1 << '\n'; 
        } else {
            int ans = 0;
            for(int i=1;i<=n;i++) ans = max(ans, dp[i]);
            cout << ans << '\n';
        }
    }
    return 0;
}