#include<stdio.h>
void bubble_sort(int arr[],int size)
{
	int i=0,j=0;
	for(i=0;i<size;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}
int main()
{
	int arr[]={3,6,1,9,4,2,0,5,8,7};
	int len=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,len);
	int i=0;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
