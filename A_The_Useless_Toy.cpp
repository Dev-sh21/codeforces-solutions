#include<iostream>
#include<map>
#include<string>

using namespace std;

void solve(){
  char start, end;
  cin >> start >> end;
  long long n;
  cin >> n;

  map<char, int> pos = {{'^', 0}, {'>', 1}, {'v', 2}, {'<', 3}};
  int s_idx = pos[start];
  int e_idx = pos[end];
  int steps = n % 4;

  bool is_cw = ((s_idx + steps) % 4 == e_idx);
  bool is_acw = ((s_idx - steps + 4) % 4 == e_idx);

  if(is_cw && is_acw) {
      cout << "undefined\n";
  } else if(is_cw) {
      cout << "cw\n";
  } else {
      cout << "ccw\n";
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  solve();
  
  return 0;
}