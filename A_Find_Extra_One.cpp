#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  int x,y;
  int left=0;
  int right=0;
  for(int i=0;i<n;i++){
    cin>>x>>y;
    if(x<0) left++;
    else right++;

  }
  if(left<=1|| right<=1) cout<<"Yes\n";
  else
  cout<<"No\n";
  return 0;

}