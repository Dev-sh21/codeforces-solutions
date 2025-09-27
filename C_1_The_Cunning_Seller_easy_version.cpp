#include <iostream>
using namespace std;

long long cost(int x) {
    long long p1 = 1, p2 = 1;
    for (int i = 0; i < x + 1; i++) p1 *= 3;
    for (int i = 0; i < x - 1; i++) p2 *= 3;
    if (x == 0) p2 = 1;
    return p1 + x * p2;
}

long long largestPowerOf3(long long num) {
    long long p = 1;
    while (p * 3 <= num) p *= 3;
    return p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) {
        long long number;cin>>number;
        if(number==0){cout<<0<<"\n";continue;}
        long long ans=0,num=number;
        while(num>0){
            long long p=largestPowerOf3(num);
            int x=0;long long temp=p;
            while(temp>1){temp/=3;x++;}
            long long lambda=num/p;
            ans+=lambda*cost(x);
            num%=p;
        }
        cout<<ans<<"\n";
    }
    return 0;
}