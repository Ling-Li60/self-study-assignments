//生成10个各不相同的1到100的随机数并求和;求平均数;判断有多少个数字比平均数小
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int contains(int arr[],int len,int num);
int main()
{
	int arr[10],i,sum=0,num,len,count=0;
	double avg;
	srand(time(NULL));
	len=sizeof(arr)/sizeof(int);
	for(i=0;i<len;){
		num=rand()%10+1;
		if(contains(arr,len,num)){
		arr[i]=num;
		printf("%d\n",num);
		sum+=arr[i];
		i++;}
	}
	printf("%d\n",sum);
	avg=(double)sum/len;
	for(i=0;i<len;i++){
		if(arr[i]<avg) count++;
	}
	printf("%.2lf %d",avg,count);
	return 0;
}
int contains(int arr[],int len,int num){
	int i;
	for(i=0;i<len;i++){
		if(num==arr[i]) return 0;
	}
	return 1;
}