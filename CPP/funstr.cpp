// 3.1 Write a function which will take a string as a parameter and 
// will remove the blank spaces before and after a string.

#include <stdio.h>
#include <string.h>
void Display_string (char *ptr)
{
int i,j;
for (i=0;i<strlen(ptr);i++)
    {
        if (ptr[i]==' ')
        {
            for( j=i; j<=strlen(ptr)-1;j++)
            {
                ptr[j]=ptr[j+1];
            }
        }
    }
    ptr[j]='\0';
 
    printf ("\nThe string is:%s",ptr);

}
int main ()
{
    char s[100];
    
    printf ("Enter string with spaces:");
    gets (s);
    Display_string (s);

    
    return 0;
}



