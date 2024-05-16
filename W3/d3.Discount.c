#include <stdio.h>
//Reynard Wistara Huga Wijaya_2702234024
int main() 
{
	int A;
	int B;
	
	scanf("%d %d",&A, &B);
	double C = ((double)(A - B)/A) * 100;
	printf("%.2lf%%\n", C);
	
	return (0);
}

