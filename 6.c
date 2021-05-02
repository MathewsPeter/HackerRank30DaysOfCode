//Day 6: Let's Review

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
	int i,j,k;
    char* ptr[10];
    scanf("%d",&k);
    for(i=0;i<k;++i)
    {   
    	ptr[i] = (char*)(malloc(10001*sizeof(char)));
        scanf("%s",ptr[i]);
    }
    
    for(i=0;i<k;++i)
    {   
    	for(j=0;j<strlen(ptr[i]);j+=2)
        {   
    		char c= ptr[i][j];
            if(c!='\0')
                printf("%c",c);
            else 
                break;
        }     
        printf(" ");
        for(j=1;j<strlen(ptr[i]);j+=2)
        {   
        	char c= ptr[i][j];
            if(c!='\0')
                printf("%c",c);
            else 
                break;
        }   
        printf("\n");
    }
    return 0;
}
