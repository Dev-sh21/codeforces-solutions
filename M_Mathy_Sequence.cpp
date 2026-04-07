#include<iostream>
using namespace std;
int trailingZero(int x){
  int cnt=0;
  while((x&1)==0){
    cnt++;
    x>>=1;

  }
  return cnt;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
      cout<<trailingZero(i)+1<<" ";
    }
    cout<<"\n";

  }

}