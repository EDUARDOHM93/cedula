#include <stdio.h>

int main (void) {

		int N = (0 < N < 1000000);
		int cedulas ;
	scanf("%d", &N);
			
	

		cedulas = (N -(N%100))/100;
		printf("%d nota(s) de: 100\n", cedulas);
		N = N%100;
		cedulas = (N -(N%50))/50;
		printf("%d nota(s) de: 50\n", cedulas);
		N = N%50;		
		cedulas = (N -(N%20))/20;
		printf("%d nota(s) de: 20\n", cedulas);
		N = N%20;
		cedulas = (N -(N%10))/10;
		printf("%d nota(s) de: 10\n", cedulas);
		N = N%10;
		cedulas = (N -(N%5))/5;
		printf("%d nota(s) de: 5\n", cedulas);
		N = N%5;
		cedulas = (N -(N%2))/2;
		printf("%d nota(s) de: 2\n", cedulas);
		N = N%2;
		cedulas = (N -(N%1))/1;
		printf("%d nota(s) de: 1\n", cedulas);
		N = N%1;
return 0;
		

}
