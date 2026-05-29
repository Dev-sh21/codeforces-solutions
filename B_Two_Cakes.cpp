#include<iostream>
using namespace std;
int main(){
  int n,a,b;
  cin>>n>>a>>b;
  int maxi=0;
  for(int i=1;i<n;i++){
    int plate_for_cake1=i;
    int plate_for_cake2=n-i;
    if(plate_for_cake1>a || plate_for_cake2>b){
      continue;
    }
    int piece_for_cake1=a/plate_for_cake1;
    int piece_for_cake2=b/plate_for_cake2;
    int current_min=min(piece_for_cake1,piece_for_cake2);
    maxi=max(maxi,current_min);
  }
  cout<<maxi<<endl;
  return 0;

}