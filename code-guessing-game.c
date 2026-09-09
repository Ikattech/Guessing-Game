#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number_user, count = 0;

    srand(time(NULL));
    int number_random = rand() % 10000;


    while(number_user != number_random){
        printf("Guess the number: ", "\n");
        scanf("%d", &number_user);
        count = count + 1;

        if(number_user > number_random){
            printf("Your number is greater than random number\n");
        } else if(number_user < number_random){
            printf("Your number is less than random number\n");
        } else {
            printf("CONGRATULATIONS! YOU WON THE GAME in %d attempts!", count);
        }
    }

    return 0;
}
