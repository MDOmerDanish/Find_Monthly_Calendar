#include<stdio.h>
int func(int m,int y)

{
    int h;
    if(m==1)
    {
        m=13;
        y--;
    }

    if(m==2)
    {
        m=14;
        y--;
    }

    h=1+(26*(m+1))/10+y+y/4+6*(y/100)+y/400;
    h=h%7;

    return h;

}

int  func2(int m,int y)
{
    int d;
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)

    {
        d=31;
    }

    if(m==4||m==6||m==9||m==11)
    {
        d=30;
    }
    if(m==2)
    {
        if(y%400==0||y%4==0&&y%100!=0)
        {
            d=29;
        }
        else d=28;


    }

    return d;
}



main()
{
    int h,m,d,i,y;
    printf("enter month : \n");
    scanf("%d",&m);
    printf("enter year :\n");
    scanf("%d",&y);
    h=func( m, y);
    d=func2(m, y);
    printf("\n\t\t\t");
    switch (m)

    {

    case 1:
        printf("JANUARY\n\n");
        break;
    case 2:
        printf("FEBRUARY\n\n");
        break;
    case 3:
        printf("MARCH\n\n");
        break;
    case 4:
        printf("APPRIL\n\n");
        break;
    case 5:
        printf("MAY\n\n");
        break;
    case 6:
        printf("JUNE\n\n");
        break;
    case 7:
        printf("JULY\n\n");
        break;
    case 8:
        printf("AUGUST\n\n");
        break;
    case 9:
        printf("SEPTEMBER\n\n");
        break;
    case 10:
        printf("OCTOBER\n\n");
        break;
    case 11:
        printf("NOVEMBER\n\n");
        break;
    case 12:
        printf("DECEMBER\n\n");
        break;


    }

    printf("SAT    SUN     MON     TUE     WED      THU     FRI\n\n");


    switch(h)
    {
    case 1:
        printf("\t");
        break ;
    case 2:
        printf("\t\t");
        break ;
    case 3:
        printf("\t\t\t");
        break ;
    case 4:
        printf("\t\t\t\t");
        break ;
    case 5:
        printf("\t\t\t\t\t");
        break ;
    case 6:
        printf("\t\t\t\t\t\t");

    }





    for(i=1; i<=d; i++)
    {
        printf("%d",i);

        printf("\t");




        if(h+i==7||h+i==14||h+i==21||h+i==28||h+i==35)
        {
            printf("\n\n\n");
        }

    }
    return 0;


}
