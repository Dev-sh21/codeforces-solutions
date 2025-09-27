#include <stdio.h>
void towerOfHanoi(int n, char A, char B, char C) {
if(n==0) return;
towerOfHanoi(n-1,A,C,B);
printf("%c to %c\n",A,C);
towerOfHanoi(n-1,B,A,C); 


}
int main() {
int x;
scanf("%d",&x);
towerOfHanoi(x,'A','B','C');



}