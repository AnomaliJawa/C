#include <stdio.h>
//Ananda Samudra Maha Putra_2702260552
int main()
{
	char code[101];
	scanf("%[^\n]s", &code);
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n", code);
	printf("    return 0;\n");
	printf("}\n");
	return 0;
}
