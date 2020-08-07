//String Acceptable by Grammer are From : ab*(a+b)

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n , i;
    char string[100];

    printf("Enter the String :\t");
    scanf("%s", &string);

    n=strlen(string);
    if(string[0]=='a' && (string[n-1]=='a' || string[n-1] == 'b') || string[n-2] == 'b')
    {
        for(i=1 ; i < n-2 ; i++)
        {
            if(string[i]!='b')
            {
                printf("String is not Accepted.....!");
                exit(0);
            }
        }
        printf("String is Accepted .....!");
    }

    else
    {
        printf("String is not Accepted.....!");
    }
}