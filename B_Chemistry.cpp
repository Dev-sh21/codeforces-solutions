#include<iostream>
#include<vector>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>freqOfChar(26,0);
    for(int i=0;i<n;i++){
      freqOfChar[s[i]-'a']++;
    }
    long long OddFreq=0;
    for(int i=0;i<26;i++){
      OddFreq+=freqOfChar[i]%2;
    }

    if(OddFreq>k+1) cout<<"NO\n";
    else cout<<"YES\n";
    
    
  }
  

}