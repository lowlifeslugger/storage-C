
#include <stdio.h>
#include <stdbool.h>
void events(){
     int x;
    for(x = 0; x<10; x++){
        bool event;
        char *state = event ? "online" : "offline";
        event = x%2;
        printf("%s\n",state);
    }
}

void sport(){
    int x;
    for(x = 0; x<10; x++){
        bool event;
        char *state = event ? "online" : "offline";
        event = (x/3)%2;
        printf("%s\n",state);
    }
}
int main() {
    
    sport();

    return 0;
}