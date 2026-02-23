#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;
int main(){
  long long n;
  cin>>n;
  vector<long long>arr(n);
  for(long long i=0;i<n;i++){
    cin>>arr[i];
  }
  long long sum=abs(accumulate(arr.begin(),arr.end(),0LL));
  cout<<sum<<endl;

}