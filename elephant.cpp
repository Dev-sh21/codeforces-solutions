#include<iostream>
using namespace std;

int main()
{
  int x;
  cin>>x;
  
  int m=x/5;
  if(x%5==0)
  cout<<m<<endl;
  else
  cout<<m+1<<endl;

return 0;

}