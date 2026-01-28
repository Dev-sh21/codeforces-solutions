#include<iostream>
using namespace std;
using ll=long long;

int main(){
  ll a,b;
  char s;
  cin>>a>>s>>b;
  if(s == '+') cout<<a+b<<endl;
   else if(s=='-') cout<<a-b<<endl;
  else if(s=='*') cout<<(a*b)<<endl;
  else if(s=='/') cout<<a/b<<endl;

}