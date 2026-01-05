#include<iostream>
#include<vector>
#include<math.h>
#include<numeric>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n; 
    vector<ll>second_element;
    ll lowest_first_min=INT_MAX;
  

    
    for(int i=0;i<n;i++){
      ll m;
     cin>>m;
    vector<ll>a(m);
    for(auto &x:a){
      cin>>x;
    }
    sort(a.begin(),a.end());
    second_element.push_back(a[1]);
    lowest_first_min=min(lowest_first_min,a[0]);
      }   

      sort(second_element.begin(),second_element.end());
      ll sum_of_second_element=accumulate(second_element.begin(),second_element.end(),0LL);
      ll lowest_second_element=second_element[0];
      ll ans=lowest_first_min+sum_of_second_element-lowest_second_element;
      cout<<ans<<endl;

    }
    return 0;
    
  }

