#include <iostream>
#include <string>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; 
        string s;
        cin >> n >> k >> s;

        int last = -k, res = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(i - last >= k){
                    res++;
                    last = i;
                } else {
                    last = i;
                }
            }
        }
        cout << res << "\n";
    }
    return 0;
}
