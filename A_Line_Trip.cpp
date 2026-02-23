#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,x;
    cin>>n>>x;

    int max_diff_betn_points=0;
    int previous_point=0;
   for(int i=0;i<n;i++)
   {
    int a;
    cin>>a;
    max_diff_betn_points=max(max_diff_betn_points,a-previous_point);
    previous_point=a;
   }
   max_diff_betn_points=max(max_diff_betn_points,2*(x-previous_point));
   cout<<max_diff_betn_points<<"\n";


  }
}