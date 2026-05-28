
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

    int min_dist=INT_MAX;
    int lastIndex=-1;
    int min_value=*min_element(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
      if(arr[i]==min_value){
        {
          if(lastIndex!=-1){
            min_dist=min(min_dist,i-lastIndex);
          }
          lastIndex=i;
        }

      }
    }
    cout<<min_dist<<endl;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();
  return 0;

}