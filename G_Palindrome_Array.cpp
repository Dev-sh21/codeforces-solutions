#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long;
int main(){
  int n;
  cin>>n;
  vector<int>arr(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
bool isPalindrome=true;
for(int i=0;i<n/2;i++){
  if(arr[i]!=arr[n-1-i]){
    isPalindrome=false;
    break;
  } 

}
  if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


  

}
