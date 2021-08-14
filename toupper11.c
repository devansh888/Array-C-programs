#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>


int main(void)
{
    string s  = get_string("Before: ");


        int n = strlen(s);

        for(int i =0; i<n; i++)
        {
            if(islower(s[i]))
            {
                printf("%c\n", toupper(s[i]));
            }

            else
            {
                printf("%c\n", s[i]);
            }

        }
    }



