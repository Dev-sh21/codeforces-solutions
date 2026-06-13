#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin>>n;
  vector<long long>remaining(n);
  for(long long i=0;i<n;i++){
    cin>>remaining[i];
  }
  long long sumOfRemaining=accumulate(remaining.begin(),remaining.end(),0LL);
  vector<long long>fullSize(n);
  for(long long i=0;i<n;i++){
    cin>>fullSize[i];
  }
  sort(fullSize.begin(),fullSize.end(),greater<long long>());
  long long fullSizeTotal=fullSize[0]+fullSize[1];

  if(sumOfRemaining<=fullSizeTotal) cout<<"YES";
  else cout<<"NO";
  return 0;
  
}