#include<iostream>
using namespace std;
int main(){
  string str;
  cin>>str;
  string rev=str;
  reverse(rev.begin(),rev.end());
  if(rev==str) {
    cout<<str<<endl;
    cout<<"YES\n";}
  else {
    bool first_zero=false;
    for(int i=0;i<rev.length();i++){
      if(rev[i]!='0' && '\n' ) {
        cout<<rev[i];  
        first_zero=true;    
      }   

    }
    if(!first_zero) cout<<'0';
    cout<<endl;
    cout<<"NO\n";};

}