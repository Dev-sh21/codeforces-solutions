#include<iostream>
#include<map>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<int,int>lowest_finder;
  for(int i=1;i<=n;i++){
    int curr_val;
    cin>>curr_val;
    if(lowest_finder.count(curr_val)==0){
      lowest_finder[curr_val]=i;
    }
    
  }
  auto it = lowest_finder.begin();
    cout << it->first << " " << it->second << endl;
}