#include<stdio.h>

void main()
{
	int item[]={43,23,54,10,74,60};
	for(int x=1;x<6;x++)
	{
		for(int y = x; y>0; y--)
		{
			if(item[y]<item[y-1])
			{
				int pack = item[y];
				item[y] = item[y-1];
				item[y-1] = pack;
			}
		}
	}
	for(int x = 0;x<6;x++)
	{
		printf("%d\n",item[x]);
	}
}
