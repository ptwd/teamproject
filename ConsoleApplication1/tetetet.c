#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;

	srand((unsigned)time(NULL));

	printf("%d������ %d������ �̵� ��û\n", rand() % 20 + 1, rand() % 20 + 1);

	return 0;

}