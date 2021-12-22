#include<stdio.h>

void main()
{
	int item[]={40,23,13,64,32,54,73}, set = 0, select,ele = 0; 
 	for(int x=0; x<7;x++)
	{
		select = item[set];
		for(int y = set; y < 7 ; y++)
		{
			if(item[y] <= select)
			{
				select = item[y];
				ele = y;
			}
		}
		item[ele] = item[set];
		item[set] = select; 
		set++;
	}
	
	for(int x=0 ; x<7 ;x++)
	{
		printf("%d\n",item[x]);
	}
}

