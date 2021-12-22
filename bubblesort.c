#include<stdio.h>

void main()
{
	int item[]={38,20,43,25,52,30};
	for(int x =0 ; x<6;x++)
	{
		for(int y = 0; y <6; y++)
		{
			if(y != 5)
			{
				if(item[y] >item[y+1])
				{
					int ctr = item[y];
					item[y] = item[y+1];
					item[y+1] = ctr; 
				}
			}
		}	
	}
	for(int x = 0;x<6;x++)
	{
		printf("%d\n",item[x]);
	}
}
