/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/
#include<stdio.h>
struct Date
{
    /* data */
    int day;
    int month;
    int year;
};
void initData(struct Date* ptrDate){
    
    ptrDate->day=0;
    ptrDate->month=0;
    ptrDate->year=0;
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter Day   :");
    scanf("%d",&ptrDate->day);
    printf("Enter Month :");
    scanf("%d",&ptrDate->month);
    printf("Enter Year :");
    scanf("%d",&ptrDate->year);
}
void printDateOnConsole(struct Date* ptrDate){
    printf("%d : ",ptrDate->day);
    printf("%d : ",ptrDate->month);
    printf("%d  ",ptrDate->year);
}
int menulist(void ){
    int choice;
    printf("\n0. To Exit");
    printf("\n1. Accept Date");
    printf("\n2. print Date");
    printf("\n3. initialize date");
    printf("Enter choice :");
    scanf("%d",&choice);
    return choice;
}
int main(){
    struct Date d1;
    int choice;
    while ( ( choice = menulist () ) !=0 ){
        if(choice==1){
            acceptDateFromConsole(&d1);
        }
        else if(choice==2){
             
             printDateOnConsole(&d1);
        }
        else if(choice==3){
            
             initData(&d1);
        }
        else {
           

        }
    }
     return 0;
   
}