#include <stdio.h>
//Ananda Samudra Maha Putra_2702260552
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
