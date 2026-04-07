#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
 
  for(int i=0;i<n;i++){
     string s;
  cin>>s;
  int len=s.length();
    if(s.length()>10){
    int middleLength=len-2;
    cout<<s[0]<<middleLength<<s[len-1]<<endl;

  }else{
    cout<<s<<endl;
  }

  }

  return 0;
}
