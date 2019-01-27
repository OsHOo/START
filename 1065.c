#include <stdio.h>
int main()
{
	int num, rlt, i;
	scanf("%d", &num);
	rlt = 0;
	for (i = 1; i<num + 1; i++)
	{
		if (i<100)
			rlt++;
		else
			if ((i % 10) + (i / 100) == 2 * ((i / 10) % 10))
				rlt++;
	}
	printf("%d", rlt);
	return 0;
}