#include<iostream>
#include<vector>
#include<unordered_set>


using namespace std;
void solve(){
  int n;
  cin>>n;
  unordered_set<int>unique_element;
  vector<int>duplicates;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(unique_element.find(x)==unique_element.end()){
      unique_element.insert(x);
    }else{
      duplicates.push_back(x);
    }


  }

  vector<int>first_temrs;
  for(int x:unique_element){
    first_temrs.push_back(x);
  }
  sort(first_temrs.begin(),first_temrs.end());

  for(int x:first_temrs){
    cout<<x<<" ";

  }
  for (int x:duplicates){
    cout<<x<<" ";

  }
  cout<<"\n";

}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;

}