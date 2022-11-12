#include <stdio.h>
#include <stdlib.h>


void main()
{
	int i, j, tmp, SwitchFlag=0;
	int a[5] = { 26, 5, 81, 7, 63 };
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[j] > a[j + 1])
			{
				SwitchFlag = 1;
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}		
		if (SwitchFlag == 0)
			break;
		else
			SwitchFlag = 0;
		printf("Loop %d:", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
		
	}
	system("pause");
}
