#include <stdio.h>
#include <math.h>

int main()
{

    int y1,y2,m1,m2,d1,d2;
    int months1, months2;

    printf("Enter the year of 1 person and 2 : ");
    scanf("\n%d %d",&y1,&y2);
    printf("Enter the month of birth of 1 person and 2 : ");
    scanf("\n%d %d",&m1,&m2);
    printf("Enter the day of birth of 1 person and 2 : ");
    scanf("%d %d",&d1,&d2);
    months1 = m1 - m2;
    months2 = (m2 - m1) - 12;
    if(y1>y2 && d1>d2)
    {
        months1 += 12;
        printf("The first person is older and full months : %d",months1);
    }
    else if (y2>y1)
    {
        months2 += 12;
        printf("The second person is older and full months : %d",months2);
    }
    else if (y1==y2 && m1==m2 && d1>d2)
    {
        printf("The first person is older");
    }
    else if (y1==y2 && m1==m2 && d2>d1)
    {
        printf("The second person is older");
    }
    else 
    {
    printf("They were born in the same year and months and day");
    }
}
