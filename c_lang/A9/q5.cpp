#include<stdio.h>
int main()
{
	int n,i,j,x,y;
	printf("Enter Row: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2 == 0){
			x = 1;	
            y = 0;
		}
		else{
			x = 0;	
            y = 1;
		}
		for(j=1;j<=i;j++){
			if(j%2 == 0)
				printf("%d ",x);
			else
				printf("%d ",y);
		}
	printf("\n");
	}
}
