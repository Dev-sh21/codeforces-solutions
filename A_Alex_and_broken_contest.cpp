#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  
  string s;
  cin>>s;
  vector<string>friends={"Danil", "Olya", "Slava", "Ann", "Nikita"};
  int total=0;
  for(string name:friends){
    size_t pos=s.find(name,0);
    while(pos!=string::npos){
      total++;
      pos=s.find(name,pos+1);
    }
  }
  if(total==1) cout<<"YES\n";
  else cout<<"NO\n";
  return 0;


}