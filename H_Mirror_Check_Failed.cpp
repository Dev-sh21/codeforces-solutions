#include<iostream>
#include<string>

using namespace std;

  bool isPal(string s){
    int i=0, j=s.size()-1;
    while(i<j){
      if(s[i]!=s[j]) return false;
      i++; j--;
    }
    return true;
  }
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.size();
    bool allSame=true;
    for(int i=1;i<n;i++){
      if(s[i]!=s[0]){
        allSame=false;
        break;
      }
    }
    if(allSame) cout<<0<<"\n";
    else if(!isPal(s)) cout<<n<<"\n";
    else cout<<n-1<<"\n";
  }
}
