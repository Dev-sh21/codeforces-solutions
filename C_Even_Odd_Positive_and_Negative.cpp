#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  
  int even=0, odd=0, pos=0, neg=0;
  


  for(int i=0;i<n;i++){
    int val;
    cin>>val;

    if(val%2==0) even++;
    else odd++;

    if (val > 0) {
            pos++;
        } else if (val < 0) {
            neg++;
        }


    
  }
  cout<< "Even: "<<even<<endl;
  cout<< "Odd: "<<odd<<endl;
  cout<< "Positive: "<<pos<<endl;
  cout<< "Negative: "<<neg<<endl;

}