//Day 10: Binary Numbers

int cnt = 0, cntmax = 0;
while(n>0)
{
	if((n&1) == 1)
	 	cnt++;
	else 
	{
		if(cnt>cntmax) 
			cntmax = cnt;
		cnt = 0;
	}
	n>>=1;
}
if(cnt>cntmax) 
	cntmax = cnt;
printf("%d",cntmax);