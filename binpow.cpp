#include<iostream>
using namespace std;
int binPow(int a, int b){
  if(b==0){
    return 1;
    
  }
  else if(b%2==1) {
    return a*binPow(a,b-1);
  }
  else{
    int temp=binPow(a,b/2);
    return temp*temp;
  }

    
  }
int main(){
  int a, b;
  cin>>a>>b;
  int res=binPow(a,b);
  cout<<res;
  
}