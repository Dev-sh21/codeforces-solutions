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
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<ll>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    ll maxFreq=0;

    vector<ll>longest_sub_a((2*n)+1,0);
    vector<ll>longest_sub_b((2*n)+1,0);

    ll counter=1;

    for(int i=1;i<n;i++){
      if(a[i]==a[i-1]) counter++;
      else{
        longest_sub_a[a[i-1]]=max(longest_sub_a[a[i-1]], counter);
        counter=1;
      }
      
    }
    longest_sub_a[a[n-1]]=max(longest_sub_a[a[n-1]], counter);
     counter=1;



    for(int i=1;i<n;i++){
      if(b[i]==b[i-1]) counter++;
      else{
        longest_sub_b[b[i-1]]=max(longest_sub_b[b[i-1]], counter);
        counter=1;
      }
    }
      longest_sub_b[b[n-1]]=max(longest_sub_b[b[n-1]], counter);
      counter=1;
    

    for(int i=1;i<=2*n;i++){
      maxFreq=max(maxFreq,longest_sub_a[i]+longest_sub_b[i]);
    }
    cout<<maxFreq<<endl;

    
  
  }
  return 0;
  
}