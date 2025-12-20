#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
void game(){
    int a;
    int t;
    int user;

    srand(time(NULL));
    t = rand() % 10 + 1;

    while (true) {
        printf("Enter a number between 1-10: ");

        if (scanf("%d", &user) != 1 || user < 1 || user > 10) {
            printf("My guy, enter a VALID number from 1 to 10.\n");

            while ((a = getchar()) != '\n' && a != EOF) { }
            continue;
        }

        break; 
    }

    if (user == t) {
        printf("Your response: %d\nGuesser response: %d\nYou won!\n", user, t);
    } else {
        printf("Your response: %d\nGuesser response: %d\nYou lost!\n", user, t);
        
    }
}
int main() {
   game();

    return 0;
}