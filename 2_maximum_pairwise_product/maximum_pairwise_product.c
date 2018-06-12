#include <stdio.h>
#define MAX_SIZE 1000

int main(void) {
  int a,n,i,max;
	int arr[MAX_SIZE];
	scanf("%d",&a);
	printf("Enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	max=arr[0];
	for(i=1;i<n;i++){
		if(min<arr[i]){
				min=arr[i];
		}
	}
	printf("%d\n",max*a);
}