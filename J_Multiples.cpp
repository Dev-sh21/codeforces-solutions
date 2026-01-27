#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int numerator;
  int denominator;
  if(a>b){
    numerator=a;
    denominator=b;
  }
  else {
    numerator=b;
    denominator=a;
  }
  if(numerator%denominator==0) cout<<"Multiples\n";
  else cout<<"No Multiples\n";

}