#include<stdio.h>
void select_sort(int arr[],int size)
{
	int i=0,j=0;
	int k=0;
	for(i=0;i<size;i++){
		k=i;
		for(j=i+1;j<size;j++){
			if(arr[k]<arr[j]){
				k=j;
			}

		}
		if(k!=i){
			int tmp=arr[k];
			arr[k]=arr[i];
			arr[i]=tmp;
		}
	}
}
int main()
{
	int arr[]={3,6,1,9,4,2,0,5,8,7};
	int len=sizeof(arr)/sizeof(arr[0]);
	select_sort(arr,len);
	int i=0;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
