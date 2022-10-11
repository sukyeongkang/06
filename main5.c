#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n)
{
	int res =1;
	int i;
	for(i=1;i<=n;i++)
	  res=res*i;
	return res;
}

int comb(int n,int r)
{
  return(factorial(n)/(factorial(n-r)*factorial(r) ));
}
  
int main(void) {
	int n, r;

	printf("Enter n: "); 
	scanf("%d", &n);
	printf("Enter r: ");
	scanf("%d", &r);
	printf("%d", comb(n,r));

}




