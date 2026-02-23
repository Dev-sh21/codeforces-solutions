#include <iostream>
using namespace std;

int main() {
	
	    int R,B,O;
	    cin>> R >> B >> O;
	    if(R==B){
	        int res=5*R;
	        cout<<res<<endl;
	    }
	    else if(R>B){
	        int diff=R-B;
	        cout<<(5*B)+(2*diff)<<endl;
	    }
	    else{
	          int diff=B-R;
	    cout<<(5*R)+(1*diff)<<endl;
	        
	    }
	  
	}


