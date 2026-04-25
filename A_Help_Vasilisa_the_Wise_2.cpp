#include<iostream>
#include<vector>

using namespace std;
int main(){
  int r1,r2,c1,c2,d1,d2;
  cin>>r1>>r2>>c1>>c2>>d1>>d2;
  for(int a=1;a<=9;a++){
    int b=r1-a;
    int c=c1-a;
    int d=d1-a;
    if(b>=1 && b<=9 && c>=1 && c<=9 && d>=1 && d<=9){
      if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        if(c+d==r2 && b+d==c2 && b+c==d2){
          cout<<a<<" "<<b<<endl;
          cout<<c<<" "<<d<<endl;
          return 0;
        }
      }
    }
    
  }
  cout<<"-1\n";
  

}