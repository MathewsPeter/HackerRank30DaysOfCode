//Day 1: Data Types

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int ii; double dd; char ss[100];    
    scanf("%d\n%lf\n\n",&ii,&dd);
    gets(ss);
    printf("%d\n",(i+ii));
    printf("%.1lf\n",(d+dd));
    printf("%s",s);
    printf("%s",ss);
    return 0;
}