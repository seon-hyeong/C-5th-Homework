#include <stdio.h>

int main(){

	int a[51][51]={0};
	int n,i,j;
	printf("Input the number of row :");
	scanf("%d",&n);

	for(i=0; i<=n; i++){
		a[i][0]=1;
			
		for(j=0; j<i+1; j++){
				
				if(j!=0 && j==i)
					a[i][j]=1;

				if(j!=0 && j<i)
					a[i][j]=a[i-1][j-1] + a[i-1][j];
				

				printf("%3d",a[i][j]);
		}

		printf("\n");
	}


return 0;
}
