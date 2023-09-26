#include<stdio.h>
int main(){
	int a[100],n,num;
	printf("enter the number of array");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<=n;i++){
		printf("%d",a[i]);
	}
	return 0;

}
