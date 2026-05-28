#include<iostream>
using namespace std;
int main(){
  long long n,k;
  cin>>n>>k;
  if(k==1) cout<<n<<endl;
  else{
    int res=1;
    while(res<=n){
      res<<=1;

    }
    cout<<res-1<<endl;
  }
  return 0;
}