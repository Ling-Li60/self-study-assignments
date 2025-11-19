#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	while(i*i<=n){
		i++;
	}
	printf("%d",i-1);
	return 0;
}