//顺序查找数组中的数据
#include<stdio.h>
int order(int arr[],int len,int num);
int main(){
	int arr[]={11,55,66,98},index;
	int num,len;
	len=sizeof(arr)/sizeof(int);
	scanf("%d",&num);
	index=order(arr,len,num);
	printf("%d\n",index);
	return 0;
}
int order(int arr[],int len,int num){
	int i;
	for(i=0;i<len;i++){
		if(num==arr[i]){
			return 1;
		}
	}
	return -1;
} 
