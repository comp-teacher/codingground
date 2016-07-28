#include <stdio.h>

void main()
{
    int mini=32767, maxi=0, number;
    int lpcnt = 0;
    int a=0,b=0,c,tmp,len=0;
    char cspaced[1024];


    /* The ugly problem 3 code */
    printf("Enter a number:\n");
    while((c=getchar()) != '\n')

    {
        cspaced[len++] = c; /* Add the character and the space */
        cspaced[len++] = ' ';

    }

    len--; /* Erase tjavascript:void(0)he trailing whitespace */
printf("Final number with spaces is:");
   for(tmp=0;tmp<=len;tmp++)
    {
        printf("%c",cspaced[tmp]);
    }
    printf("\n");


}