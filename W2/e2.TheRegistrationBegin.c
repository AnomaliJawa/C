#include <stdio.h>
//Reynard Wistara Huga Wijaya_2702234024
int main()
{	
	char Nama[100], ID[11];
	char Kelas; 
	int nomor;
	scanf(" %s", ID);
	scanf(" %[^\ns]", Nama); 
	scanf(" %c %d", &Kelas, &nomor);
	
	printf("Id    : %s\n", ID);
	printf("Name  : %s\n", Nama);
    printf("Class : %c\n", Kelas);
    printf("Num   : %d\n", nomor);
	
	return 0;
}
