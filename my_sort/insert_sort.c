#include<stdio.h>
void insert_sort(int arr[],int size)
{
	int i=0,j=0;
	int tmp=0;
	for(i=1;i<size;i++){
		tmp=arr[i];
		j=i;
		while(j>0 && arr[j-1]>tmp){
			arr[j]=arr[j-1];
			j--;
		}
		arr[j]=tmp;
	}
}
int main()
{
	int arr[]={3,6,1,9,4,2,0,5,8,7};
	int len=sizeof(arr)/sizeof(arr[0]);
	insert_sort(arr,len);
	int i=0;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
