#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool isPremuatation(vector<int>&a, vector<int>&b){
  if(a.size()!=b.size()) return false;
  unordered_map<int,int>freq;
  for(int x:a) freq[x]++;
  for(int x:b) freq[x]--;
  for(auto it:freq){
    if(it.second!=0) return false;
    
  }
  return true;

}
int main(){
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++) cin>>a[i];
  vector<int>b(n);
  for(int i=0;i<n;i++) cin>>b[i];
  if(isPremuatation(a,b)) cout<<"yes\n";
  else cout<<"no\n";


}