#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	struct data
	{
		int abc;
		int xxx;
		int ddd;
	};

	struct data list;
	char buffer[128] = { 0 };
	char *token[128] = { NULL, };
	int i = 0;

	FILE *fp = fopen("data.txt", "r");

	while (fgets(buffer, 128, fp) != NULL )

	{
		char *ptr = strtok(buffer, "=");

		while (ptr != NULL)
		{
			token[i] = ptr;
			i++;

			ptr = strtok(NULL, " ");
		}
		printf("%s\n", token[0]);
		printf("%s\n", token[1]);

		if (strcmp(token[0], "abc") == 0)
		list.abc = atoi(token[1]);

		else if(strcmp(token[0], "xxx") == 0)
		list.xxx = atoi(token[1]);

		else if(strcmp(token[0], "ddd") == 0)
		list.ddd = atoi(token[1]);

	}
	printf("from list-abc : %d\n", list.abc);
	printf("from list-xxx : %d\n", list.xxx);
	printf("from list-ddd : %d\n", list.ddd);

	fclose(fp);
	return 0;
}