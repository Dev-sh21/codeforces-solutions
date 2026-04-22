#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int odd=0;
    int even=0;
    for(int i=0;i<2*n;i++){
      int val;
      cin>>val;
      if(val%2==0) even++;
      else odd++;

    }
    if(odd==even) cout<<"Yes\n";
    else cout<<"No\n";
   

  

  }

}