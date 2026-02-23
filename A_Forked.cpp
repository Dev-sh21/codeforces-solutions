#include<iostream>
#include<set>
#include<vector>

using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
int a,b;
cin>>a>>b;
int xk,yk;
cin>>xk>>yk;
int xq,yq;
cin>>xq>>yq;
vector<pair<int,int>>directions={{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

set<pair<int,int>> king_attacks,queen_attacks;
for(auto d:directions)
{
king_attacks.insert({xk+d.first, yk+d.second});
queen_attacks.insert({xq+d.first, yq+d.second});
}
int ans=0;
for(auto pos:king_attacks)
if(queen_attacks.count(pos))ans++;
cout<<ans<<"\n";
}
return 0;
}
