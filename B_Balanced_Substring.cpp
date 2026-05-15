#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  string s;
  cin>>s;

  unordered_map<int,int>first_occurance;
  int curr_sum=0;
  int max_len=0;
  first_occurance[0]=-1;
  for(int i=0;i<n;i++){
    if(s[i]=='1') curr_sum++;
    else curr_sum--;
    if(first_occurance.find(curr_sum)!=first_occurance.end()){
      max_len=max(max_len,i-first_occurance[curr_sum]);
    }else{
      first_occurance[curr_sum]=i;
    }
  }
  cout<<max_len<<endl;
  return 0;


}