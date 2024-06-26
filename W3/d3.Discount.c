#include <stdio.h>
//Ananda Samudra Maha Putra_2702260552
int main() 
{
	int A;
	int B;
	
	scanf("%d %d",&A, &B);
	double C = ((double)(A - B)/A) * 100;
	printf("%.2lf%%\n", C);
	
	return (0);
}

