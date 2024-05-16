#include<stdio.h>
int main()
{
	int N, i, b, hasil;
	scanf ("%d", &N);
	int hitung=0;
	for(i=0;i<=N;i++){
		for(b=0;b<=N;b++){
			hasil=N-i-b;
			if (hasil>=0){
				hitung++;
			}
		}
	}
	printf("%d\n", hitung);
	return (0);
}
