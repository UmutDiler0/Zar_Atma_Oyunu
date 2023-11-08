#include <stdio.h>
#include <stdlib.h>


int main()
{
    int zar1,zar2;
    int i;
    srand(time(0));
    zar1=rand()%6;
    zar2=rand()%6;
    int toplam1=zar1+zar2;

    printf("1.atis =%d\n",toplam1);

    if(toplam1==7 || toplam1==11)
    {
        printf("tebrikler oyunu kazandiniz");
    }
    else if(toplam1==2 || toplam1==3 || toplam1==12)
    {
        printf("kaybettiniz:\n");
    }
    else
    {

        for(i=1;i<7;i++)
        {
            zar1=rand()%6;
            zar2=rand()%6;
            int toplam2=zar1+zar2;
            printf("%d . atis=%d\n",i+1,toplam2);
            if(toplam2==toplam1)
            {
                printf("oyunu kazandiniz");
                break;
            }
        }
    }





    return 0;
}
