//打乱一个长度为5的数组
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void luan(int arr[],int len);
void printfarr(int arr[],int len);
int main()
{
	int arr[5],len,i;
	len=sizeof(arr)/sizeof(int);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	luan(arr,len);
	printfarr(arr,len);
	

	return 0;
}
//打乱数组
void luan(int arr[],int len){
	int num,i,temp;
	srand(time(NULL));
	for(i=0;i<len;i++){
		num=rand()%(len);
		temp=arr[i];
		arr[i]=arr[num];
		arr[num]=temp;
	}
}
//遍历数组
void printfarr(int arr[],int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d",arr[i]);
		if(i<len-1) printf(" ");
		if(i==len-1) printf("\n");
	}
}