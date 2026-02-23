#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int N;
    cin>>N;
    vector<int> arr(N);
    for(int i=0;i<N;i++)
    cin>>arr[i];

    int i=0,j=N-1;
    while(i<N-1 && arr[i]==arr[i+1]) i++;
    while(j>=1 && arr[j]==arr[j-1]) j--;
    
    if(arr[i]==arr[N-1]) cout<<max(j-i-1,0);
    else 
    cout<<max(min(N-i-1,j),0);
    cout<<"\n";
  }

}