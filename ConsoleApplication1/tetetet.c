#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;

	srand((unsigned)time(NULL));

	printf("%d층에서 %d으로의 이동 요청\n", rand() % 20 + 1, rand() % 20 + 1);

	return 0;

}