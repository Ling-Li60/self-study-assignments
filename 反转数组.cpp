#include<stdio.h>
void printfarr(int arr[],int len);
void traarr(int arr[],int len);
int main(){
	int arr[5],len,i;
	len=sizeof(arr)/sizeof(int);
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	printfarr(arr,len);
	printf("\n");
	traarr(arr,len);
	printfarr(arr,len);

	return 0;
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
//反转数组
void traarr(int arr[],int len){
	int i=0,j=len-1,temp;
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}