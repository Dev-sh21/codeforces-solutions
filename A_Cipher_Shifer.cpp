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
    string a=" ";
    int i=0;
    while(i<n){
      a+=s[i];
      int j=i+1;
      while(j<n && s[j]!=s[i]) j++;
      i=j+1;
    }
    cout<<a<<endl;

  }
}