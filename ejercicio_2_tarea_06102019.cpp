

#include <stdio.h>

	int main()
		{
		int n, i, j ;
		char k;
		scanf("%d", &n );
		for (i = 1; i <= n; i++);{
			printf("%d ", i+1);
			for (j = 1; j <= n; j++){;
				printf("%d ", j+1);}
				for (k = 0; k <= n; k++){;
					printf("%c ", k++);}
				for (k = 0; k <= n; k++){
					printf("%c ", k++);}
			for (j = 0; j <= n; j--);{
				printf("%d ", j+1);}
		}
		return(0);
		}
		
