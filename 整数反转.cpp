#include<stdio.h>
int main()
{
	int n,rev=0,h;
	scanf("%d",&n);
	while(n!=0){
		h=n%10;
		n/=10;
		rev=rev*10+h;
	}
	printf("%d\n",rev);
	return 0;
}