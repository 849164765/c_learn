#include<stdio.h>
#include<math.h>
int main()
{
	long x,y;
	int i,count = 0;
	scanf("%d", &x);
	for (i = 0;;i++ ,count++)
	{
		y = x % 10;
		printf("%d", y);
		x = x / 10;
		if (x == 0) break;
	}




	return 0;
}