#include<stdio.h>
#include<cs50.h>
#include<string.h>

float average(int length, int array[]);

const int TOTAL= 3;

int main(void)
{
    int scores[TOTAL];

    for(int i = 0; i< TOTAL; i++)
    {
        scores[i] = get_int("score:");




    }
printf("Average: %f\n", average(TOTAL, scores));

}

float average(int length, int array[])
{
    int sum = 0;
    for(int n = 0; n< length; n++)
    {
        sum = sum + array[n];
    }

    return (float)sum/length;
}