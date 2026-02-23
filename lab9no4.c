#include<stdio.h>
void swapValue(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp; 
}
void swapArray(int arr[], int barr[], int size){
	int temp,i;
	for(i = 0;i<size;i++){
		temp = arr[i];
		arr[i] = barr[i];
		barr[i] = temp;
	}
}
int main() {
	int a = 1, b = 2, c = 3;
	int x;
	int i;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue(&a,&b,&c);
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	printf("Add array size : ");
	scanf("%d",&x);
	int arr[x],barr[x];
	for(i = 0 ;i<x;i++){
		scanf("%d",&arr[i]);
	}
	for(i = 0;i<x;i++){
		scanf("%d",&barr[i]);
	}
	swapArray(arr,barr,x);
	printf("After swap Array: \n");
	for(i = 0 ;i<x;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	for(i = 0;i<x;i++){
		printf("%d ",barr[i]);
	}
}

