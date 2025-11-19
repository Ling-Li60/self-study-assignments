#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j;
	srand(time(NULL));
	i=rand()%100+1;
	while(1){
		printf("请输入1-100数字\n");
		scanf("%d",&j);
		if(j==i){
			printf("对了\n");
			break;}
		else if(j<i) printf("太小了\n");
		else printf("太大了\n");
	}
	return 0;
}