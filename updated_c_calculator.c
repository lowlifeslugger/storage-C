
#include <stdio.h>

int main() {

float x;
float y;
int c;
float r;
char symbol;
printf("n1 : ");
if(scanf("%f",&x) != 1){
    while((c=getchar()) != '\n' && c != EOF){  }
    return 0;
}
printf("n2 : ");
if(scanf("%f",&y) != 1){
    while((c=getchar()) != '\n' && c != EOF){  }
    return 0;
}
printf("[+](n1+n2)\n [-](n1-n2)\n [x](n1xn2)\n [/](n1/n2)\n");
scanf(" %c",&symbol);
switch(symbol){
    case '+' :
    r = x + y;
    printf("%f",r);
    break;
    
    case '-' :
    r = x - y;
    printf("%f",r);
    break;
    
    case 'x' :
    case 'X' :
    case '*' :
    r = x*y;
    printf("%f",r);
    break;
    
    case '/' :
    if(y == 0){
        printf("no");

    }else{
        r = x/y;
        printf("%f",r);
    }
    
    default :
    printf(" try again ");
    
}


    return 0;
}