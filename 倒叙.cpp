#include <stdio.h>
#include <math.h>

int main()
{
	int m,x,y=0,i=0;
	scanf("%d",&m);
	while (m>0) {
		x=m%10;
		y=y*10+x;
		i++;
		m=m/10;
	}
	printf("%d %d",i,y);
	return 0;
}
