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
    bool possible=false;
    for(int i=0;i<=n-11;i++){
      if(s[i]=='8'){
        possible=true;
        break;
      }
      
      

    }
    if(possible){
      cout<<"YES\n";
    }
    else {
      cout<<"NO\n";
    }
    
  }
  return 0;

}

