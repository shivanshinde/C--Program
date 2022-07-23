#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define BillCnt 2

struct Jewellery_Shop
{
    int Jewellery_ID;
    char Jewellery_Name[40];
    char Customer_Name[40];
    long long int Customer_Mob_No;
    float Jewellery_Weight;
    float Bill_Amount;
};
int i = 0,Cnt = 0,Dig = 0,Choice = 0;
long long int Temp = 0;
struct Jewellery_Shop Jw_Bill[BillCnt];

void Accepting_Information();
void Display_Information();

int main()
{
    printf("\n\t Enter Choice => \n 1.Accepting Information.\n 2.Display Information.\n 3.Exit");

    switch (Choice)
    {
    case 1:
        Accept_Information();
        break;
    case 2:
        Display_Information();
        break;
    case 3:
        printf("...........Thank You...........");
        break;

    default:
        printf("\n\t Please Check The Choice => ");
        break;
    }
}
void Accept_Information()
{



    for(i = 0;i < BillCnt;i++)
    {
            Jw_Bill[i].Jewellery_ID = 8365223 + i;

            printf("\n\t Jewellery %d ID Details.....",Jw_Bill[i].Jewellery_ID);

            fflush(stdin);

            printf("\n\n\t Enter Jewellery Name => ");
            gets(Jw_Bill[i].Jewellery_Name);
            fflush(stdin);

            printf("\n\t Enter Customer Name =>  ");
            gets(Jw_Bill[i].Customer_Name);
            fflush(stdin);
            up:
            Cnt = 0;
            printf("\n\t Enter Mobile Number => ");
            scanf("%lld",&Jw_Bill[i].Customer_Mob_No);

            Temp = Jw_Bill[i].Customer_Mob_No;

            while(Temp > 0)
            {
                Dig = Temp % 10;
                Cnt++;
                Temp = Temp / 10;
            }
            if(Cnt != 10)
            {
                printf("\n Invalid Number.....");
                goto up;
            }

            printf("\n\t Enter Jewellery Weight In Gram =>  ");
            scanf("%f",&Jw_Bill[i].Jewellery_Weight);

            Jw_Bill[i].Bill_Amount = Jw_Bill[i].Jewellery_Weight * 5500 ;
            printf("\n\t ===========================************========================");
    }
}
void Display_Information()
{
    system("cls");

            ///Display Information.......

    for(int i = 0;i < BillCnt;i++)
    {
            printf("\n\n=========================***********=========================\n\n");
            printf("\n\t ********....JEWELLERY BILL....********\n\n");

            printf("\n\t Jewellery ID              = %d",Jw_Bill[i].Jewellery_ID);
            printf("\n\t Jewellery Name            = %s",Jw_Bill[i].Jewellery_Name);
            printf("\n\t Customer Name             = %s",Jw_Bill[i].Customer_Name);
            printf("\n\t Customer Mobile Number    = %lld",Jw_Bill[i].Customer_Mob_No);
            printf("\n\t Jewellery Weight in Gram  = %0.2f",Jw_Bill[i].Jewellery_Weight);
            printf("\n\t Jewellery Bill Amount     = %0.2f",Jw_Bill[i].Bill_Amount);

            printf("\n\n\t\t ****THANK YOU****");

            printf("\n\n=========================***********=========================\n\n");
    }
    getch();
    return 0;

}
