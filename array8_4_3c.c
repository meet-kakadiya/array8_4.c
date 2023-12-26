#include<stdio.h>
void main(){
	int r,c,sum=0;
	printf("Enter the Size of Row in Array: ");
	scanf("%d",&r);
	printf("\nEnter the Size of Column in Array: ");
	scanf("%d",&c);
	int rc=r*c;
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Element A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
			sum+=a[i][j];
		}
		printf("\n");
	}
	printf("\nThe sum of all elements in Array A is: %d",sum);
	float avg=sum/rc;
	printf("\nThe Average of all elements in Array B is: %f",avg);
}
