#include<iostream>
using namespace std;
using ll=long long;
int main(){
  ll l1,r1,l2,r2;
  cin>>l1>>r1>>l2>>r2;
  ll left=max(l1,l2);
  ll right=min(r1,r2);
  if(left<=right){
    cout<<left<<" "<<right<<endl; 
} else{
  cout<<"-1\n";
}

}