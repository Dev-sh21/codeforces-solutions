#include<iostream>
#include<string>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  string s1,s2;
  cin>>s1>>s2;
  int n1=s1.length();
  int n2=s2.length();
  int count1=0;
  int count2=0;

 

  for(int i=0;i<n1-1;i++){
    if(s1[i]==s1[i+1]) count1++;
  }
  for(int i=0;i<n2-1;i++){
    if(s2[i]==s2[i+1]) count2++;
  }

  int joint_error=0;
  if(s1[n1-1] == s2[n2-1]) joint_error = 1;

  if(count1+ count2 + joint_error<=1) cout<<"YES\n";
  else cout<<"NO\n";

}
int main(){

  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
  
}