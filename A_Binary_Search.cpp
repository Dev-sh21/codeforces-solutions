#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  while(k--){
    int x;
    cin>>x;
    int low=0, high=n-1;
    int found=false;

    while(low<=high){
      int mid=low+(high-low)/2;
      if(arr[mid]==x){
        found=true;
        break;
      }
      else if(arr[mid] < x){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        


    }
    if(found) cout << "YES\n";
    else cout << "NO\n";
    



  }return 0;
  


}