#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int>arr1(n),arr2(n);
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];

    int l=INT_MIN, r=INT_MIN;
    for(int i=0;i<n;i++)
    {
      if(arr1[i]!=arr2[i])
      {
        if(l==INT_MIN) l=i;
        r=i;

      }
    }


    int i=l-1;
    while(i>=0 && arr2[i]<=arr2[i+1]) i--;
    l=i+1;

    int j=r+1;
    while(j<n && arr2[j]>=arr2[j-1]) j++;
    r=j-1;

    cout<<l+1<<" "<<r+1<<endl;


  }
}