//二分查找,前提是数组中的数据必须是有序的
#include<stdio.h>
int bi(int max,int min,int num);
int main(){
	int arr[]={1,2,5,8,14};
	int num,temp,len,max,min;
	len=sizeof(arr)/sizeof(int);
	max=len-1;
	min=0;
	scanf("%d",&num);
	if((num>arr[len-1])||(num<arr[0])){
		printf("不存在");
		return 0;
	}
	while(max-min>1){
		if(bi(arr[max],arr[min],num)){
			max=(max+min)/2;}
		else min=(max+min)/2;
	}
	if(arr[min]==num) printf("%d",min);
	else if(arr[max]==num) printf("%d",max);
	else printf("%d与%d之间",min,max);

	return 0;
}
int bi(int max,int min,int num){
	if(num<(max+min)/2) return 1;
	else return 0;
}