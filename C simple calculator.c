
#include <stdio.h>
/*simple calculator*/
int main() {
    float x;
    float y;
    char symbol;
    float result;

    printf("first number : ");
    scanf("%f",&x);
    printf("second number : ");
    scanf("%f",&y);
    printf(" + , - , x , / : ");
    scanf(" %c", &symbol);

    switch(symbol){
        case '+' :
        result = x+y;
        printf("%f",result);
        break;
        
        case '-' :
        result = x-y;
        printf("%f", result);
        break;
        
        case 'x' :
        result = x*y;
        printf("%f" ,result);
        break;
        
        case '/' :
 
        if(y == 0){
            printf("sorry but no...");
            
        }else{
            result = x/y;
            printf("%f", result);
        }
        break;
        
        default :
        printf(" (in a monotone tired voice)\n no");
        break;
 
        
    }

    
    return 0;
}