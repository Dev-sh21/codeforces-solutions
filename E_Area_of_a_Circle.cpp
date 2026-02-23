#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
using db=double;
int main(){
  cout << fixed << setprecision(9);
    db r;
    cin>>r;
    db area=3.141592653*pow(r,2);
    cout<<area<<endl;

}