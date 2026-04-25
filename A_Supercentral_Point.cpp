#include<iostream>
#include<vector>
using namespace std;
struct Points{
  int x,y;
};
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin>>n;
  vector<Points>points(n);
  for(int i=0;i<n;i++){
    cin>>points[i].x>>points[i].y;
  }
  int supercentral_points=0;

  for(int i=0;i<n;i++){
    bool hasUpper = false, hasLower = false, hasLeft = false, hasRight = false;
    for(int j=0;j<n;j++){
      if(i==j) continue;
      if (points[j].x > points[i].x && points[j].y == points[i].y) hasRight = true;
      if (points[j].x < points[i].x && points[j].y == points[i].y) hasLeft = true;
      if (points[j].y > points[i].y && points[j].x == points[i].x) hasUpper = true;
      if (points[j].y < points[i].y && points[j].x == points[i].x) hasLower = true;
    }
    if(hasUpper && hasLeft && hasRight && hasLower) supercentral_points++;
  }
  cout<<supercentral_points<<endl;
  return 0;

}