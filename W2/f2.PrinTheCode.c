#include <stdio.h>
//Reynard Wistara Huga Wijaya_2702234024
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
