#include<iostream>
#include<string>
#include<cmath>

#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
   string m;
    cin>>m;
      
      long long k=m.length()-1;

      int nearest_val=1;
      for(int i=0;i<k;i++){
        nearest_val*=10;
      }
      long long d=stoll(m)-nearest_val;
      cout<<d<<endl;

    
  }
}