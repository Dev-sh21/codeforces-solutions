#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string rev_s=s;
    reverse(rev_s.begin(), rev_s.end());
    if (s<=rev_s) cout<<s<<endl;
    else cout<<rev_s<<s<<endl;
  }
  return 0;
}