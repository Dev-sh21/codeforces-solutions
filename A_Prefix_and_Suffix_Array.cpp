#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s1=" ",s2=" ";
    for(int i=0;i<2*n-2;i++){
      string temp;
      cin>>temp;
      if(temp.length()==n-1){
        if(s1==" ") s1=temp;
        else s2=temp;

      }
    }
    reverse(s1.begin(),s1.end());
    if(s1==s2) cout<<"YES\n";
    else cout<<"NO\n";


  }
  return 0;
}