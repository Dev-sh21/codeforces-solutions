#include<iostream>
#include<vector>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int operations=0;
    int i=0;
    int j=0;
    while(i<n && j<n){
      if(a[i]<=b[j]){
        i++;
        j++;
      }else{
        operations++;
        j++;
      }


    }
    cout<<operations<<endl;



  }
  
}