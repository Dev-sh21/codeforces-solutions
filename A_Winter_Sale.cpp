#include<iostream>
#include <iomanip>
using namespace std;
int main(){
  float x,p;
  cin>>x>>p;
  cout<<fixed<<setprecision(2)<<(100*p)/(100-x)<<endl;
}