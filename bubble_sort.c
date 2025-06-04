//Ã°ÅİÅÅĞò
#include<stdio.h>

void output(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	putchar('\n');
}

void bs(int *arr,int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
		output(arr,n);
	}
}
int main(){
	puts("Ã°ÅİÅÅĞò£º\n");
	int a[10] = {12,2,16,30,28,10,16,20,6,18};
	bs(a,10);
	output(a,10);	
}

