#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the Size of Rows in Array: ");
	scanf("%d",&r);
	printf("Enter the Size of Columns in Array: ");
	scanf("%d",&c);
	int a[r][c];
	printf("\n");
	int i,j;
	int max=a[0][0],min=a[0][0],equal=a[0][0];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter the Value for Element A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
		printf("\n");
	}
	printf("\nThe Maximum Value in Array is : %d ",max);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}
	printf("\nThe Minimum Value in Array is : %d ",min);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(equal == a[i][j]){
				equal=a[i][j];
			}
		}
	}
	printf("\nThe Same Value in Array is : %d ",equal);
}
