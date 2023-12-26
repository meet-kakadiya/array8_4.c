#include<stdio.h>
void main(){
	int ar,ac,br,bc;
	printf("Enter the size of Row of Array A: ");
	scanf("%d",&ar);
	printf("\nEnter the size of Column of Array A: ");
	scanf("%d",&ac);
	printf("\nEnter the size of Row of Array B: ");
	scanf("%d",&br);
	printf("\nEnter the size of Column of Array B: ");
	scanf("%d",&bc);
	int i,j;
	printf("\n");
	int a[ar][ac],b[br][bc];
	if(ar==br && ac==bc){
			for(i=0;i<ar;i++){
				for(j=0;j<ac;j++){
					printf("Enter the Value for Element A[%d][%d] : ",i,j);
					scanf("%d",&a[i][j]);
				}	
			}
			printf("\n");
			for(i=0;i<br;i++){
				for(j=0;j<bc;j++){
					printf("Enter the Value for Element B[%d][%d] : ",i,j);
					scanf("%d",&b[i][j]);
				}
			}
			printf("\n");
			for(i=0;i<ar;i++){
				for(j=0;j<ac;j++){
					printf("\nValue of A[%d][%d] is %d: ",i,j,a[i][j]);
				}
			}
			for(i=0;i<br;i++){
				for(j=0;j<bc;j++){
					printf("\nValue of B[%d][%d] is %d : ",i,j,b[i][j]);
				}
			}
			printf("\nAddition of Two 2-D Arrays:");
			printf("\n");
			for(i=0;i<ar;i++){
				for(j=0;j<ac;j++){
					printf(" %d ",a[i][j]+b[i][j]);	
				}
				printf("\n");
			}
			printf("\nSubtraction of Two 2-D Arrays: ");
			printf("\n");
			for(i=0;i<ar;i++){
				for(j=0;j<ac;j++){
			printf(" %d ",a[i][j]-b[i][j]);
				}
				printf("\n");
			}
			printf("\nMultiplication of Two 2-D Arrays: ");
			printf("\n");
			for(i=0;i<ar;i++){
				for(j=0;j<ac;j++){
			printf(" %d ",a[i][j]*b[i][j]);
				}
				printf("\n");
			}
	}else{
		printf("\nThe Size of Array A and B must be same!!");
	}
}
