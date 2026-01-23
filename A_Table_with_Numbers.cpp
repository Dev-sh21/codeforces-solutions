#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,h,l;
    cin>>n>>h>>l;
    vector<int>arr(n);
    int countH=0;
    int countL=0;
    int useful=0;
    int maxPair=n/2;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      bool isUseful=false;

      if(x<=h) {countH++;isUseful=true;}
      if(x<=l) {countL++;isUseful=true;}
      if(isUseful) useful++;
    }
    int ans=min({countH, countL,useful/2});
    cout<<ans<<"\n";

  }
  return 0;

}