#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int original[3]={a,b,c};
  int copy[3]={a,b,c};
  sort(copy,copy+3);
  for(int i=0;i<3;i++){
    cout<<copy[i]<<endl;
  }
  cout<<endl;
  for(int i=0;i<3;i++){
    cout<<original[i]<<endl;
  }



}