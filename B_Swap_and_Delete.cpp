#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int c1=0,c0=0;
    int t0=0;
    string v;
    cin>>v;
    int n=v.size();
    for(int i=0;i<n;i++){
      if(v[i]=='0') c0++;
      else c1++;
    }

    for(int i=0;i<n;i++){
      if(c1>0 && v[i]=='0'){
        c1--;
        t0++;

      } 
      else if(c0>0 && v[i]=='1'){
        c0--;
        t0++;
      }
      else break;

    }
    cout<< n-t0<<endl;
    

  }
  return 0;

}