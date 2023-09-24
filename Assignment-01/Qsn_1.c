#include <stdio.h>

sturct Date 
{
    int day;
    int mon;
    int yr;
};

void initDate(struct Date* ptrDate)
{
    ptrDate -> day=00;
    ptrDate -> mon=00;
    ptrDate -> yr=00;
}

Void accepyDatefromconsole(struct Date* ptrDate)
{

     printf("enter the day=");
     scanf("%d",&ptrDate->day);
      printf("enter the mon=");
     scanf("%d",&ptrDate->mon);
      printf("enter the year=");
     scanf("%d",&ptrDate->yr);

}

Void printDatefromconsole(struct Date* ptrDate)
{

    printf("Date is = %d/%d/%d\n", ptrDate->day,ptrDate->mon,ptrDate->yr);

}

int main()
{
     int choice;
     struct Date d1;

     do{

     
        printf("1.Default Date\n2.Print Date\n3.Accept Date\n0.Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                    initDate(&d1);
                    printDateOnConsole(&d1);
                    break;
            case 2:
                    printDateOnConsole(&d1);
                    break;
            case 3:
                    acceptDateFromConsole(&d1);
                    break;
        }
    }while(choice!=0);
    return 0;


     }

};



