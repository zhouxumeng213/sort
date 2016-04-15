#include<stdio.h>
void shell_insert_sort(int arr[],int size)
{
	int gap=0;
	int i=0,j=0,k=0;
	for(gap=size/2;gap>0;gap/=2){
		//for(i=0;i<gap;i++){
			for(j=gap;j<size;j++){
				int tmp=arr[j];
				k=j;
				while(k-gap>=0 && arr[k-gap]>tmp){
					arr[k]=arr[k-gap];
					k-=gap;
				}
				arr[k]=tmp;
			}
		//}
	}
}
int main()
{
	int arr[]={3,6,1,9,4,2,0,5,8,7};
	int len=sizeof(arr)/sizeof(arr[0]);
	shell_insert_sort(arr,len);
	int i=0;
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
