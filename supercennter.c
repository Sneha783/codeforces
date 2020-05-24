#include<stdio.h>
main()
{
	int c,m,n,t=0;
	scanf("%d",&c);
	int x[c],y[c],fr,fl,fu,flw;

	for(m=0;m<c;m++)
		scanf("%d %d",&x[m],&y[m]);

	for(m=0;m<c;m++)
	{
		fr=0,fl=0,fu=0,flw=0;
		for(n=0;n<c;n++)
		{
			if((x[m]>x[n])&&(y[m]==y[n]))
				fr=1;
			if((x[m]<x[n])&&(y[m]==y[n]))
				fl=1;
			if((x[m]==x[n])&&(y[m]>y[n]))
				fu=1;
			if((x[m]==x[n])&&(y[m]<y[n]))
				flw=1;
		}
		if((fr==1)&&(fl==1)&&(flw==1)&&(fu==1))
			t++;
	}
	printf("%d\n",t);

}
