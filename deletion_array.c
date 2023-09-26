#include<stdio.h>
int main(){
	int a[100],i,pos,n;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	printf("enter the postion");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	return 0;
}
