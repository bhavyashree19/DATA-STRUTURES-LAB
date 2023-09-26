#include<stdio.h>
int main(){
	int i,a[100],n,num,pos,item;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	printf("enter the postion");
	scanf("%d",&pos);
	printf("enter the item");
	scanf("%d",&item);
	n=n+1;
	for(i=n-1;i>=pos-1;i--){
		a[i]=a[i-1];
	}
		a[pos-1]=item;
	for(i=0;i<=n-1;i++){
		printf("%d",a[i]);
	}
	return 0;
}

