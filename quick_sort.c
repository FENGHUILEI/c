//快速排序
#include<stdio.h>
#include<string.h>

void swap(int*,int*);
int partition(int *arr,int low,int high);
void qs(int *arr,int low,int high);
void output(int *arr);

int main(){
	puts("快速排序：\n");
	int a[10] = {12,2,16,30,28,10,16,20,6,18};
	qs(a,0,9);
	output(a);
}

void swap(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

void qs(int *arr,int low,int high){
	if(low<high){
		int pivot = partition(arr,low,high);
		output(arr);
		qs(arr,low,pivot-1);
		qs(arr,pivot+1,high);	
	}
}

int partition(int *arr,int low,int high){
	int benchmark = arr[high];
	int pivot = low;
	for(int i=low;i<high;i++){
		if(arr[i]<benchmark){
			swap(&arr[i],&arr[pivot]);
			pivot++;
		}
	}
	swap(&arr[pivot],&arr[high]);
	return pivot;
}

void output(int *arr){
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	putchar('\n');
}

