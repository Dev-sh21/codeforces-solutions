#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        int n;
        cin>>n;
        int a[n], zeros=0, neg=0;
        for (int i =0; i <n;++i) {
            cin>>a[i];
            if (a[i]==0) zeros++;
            else if(a[i]== -1) neg++;
        }
        int ops=zeros;
        if (neg%2==1) ops +=2;
        cout <<ops<< "\n";
    }
    return 0;
}
