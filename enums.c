#include <stdio.h>
enum Months{
    January=1 , February=2 , March=3 , April=4 ,
    May=5 , June=6 , July=7 , August=8 , 
    September=9 , October=10 , November=11 , December=12
};
int main() {
    int i;

    for(i = 0; i< 13; i++){
        enum Months Month = i%13 ;

        switch(i){
            case 1:
            printf("january\n");
            printf("%d st month of the year\n\n", Month);
            break;
            
            case 2:
            printf("February\n");
            printf("%d nd month of the year\n\n", Month);
            break;
            
            case 3:
            printf("March\n");
            printf("%d rd month of the year\n\n", Month);
            break;
            
            case 4:
            printf("April\n");
            printf("%d th month of the year\n\n", Month);
            break;  
            
            case 5:
            printf("May\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 6:
            printf("June\n");
            printf("%d th month of the year\n\n", Month);
            break;            
            
            case 7:
            printf("July\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 8:
            printf("August\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 9:
            printf("September\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 10:
            printf("October\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 11:
            printf("November\n");
            printf("%d th month of the year\n\n", Month);
            break;
            
            case 12:
            printf("December\n");
            printf("%d th month of the year\n\n", Month);
            break;            
        }
    }
    


    return 0;
}