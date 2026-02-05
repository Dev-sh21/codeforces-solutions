#include<iostream>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m && n>0 && m>0){
    int sum=0;
    int start=min(n,m);
    int end=max(n,m);
    for(int i=start;i<=end;i++){
      cout<<i<<" ";
      sum+=i;
    }
    cout<<"sum ="<<sum<<endl;
  }
  
  
  }
