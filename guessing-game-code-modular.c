#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randNumber(){
    return rand() % 10;
}

void result(int count){
    printf("CONGRATULATIONS! YOU WON THE GAME in %d attempts!", count);
}

void givetip(int number_user, int random){
    if(number_user > random){
        printf("Your number is greater than random number\n");
    } else if (number_user < random){
        printf("Your number is less than random number\n");
    }
} 

void jogar(){
    int number_user = -1;
    int random = randNumber();
    int count = 0;
    
    while(number_user != random){
        printf("Guess the number: ");
        scanf("%d", &number_user);
        count++;
        givetip(number_user, random);
    }

    result(count);
}

int main(){
    srand(time(NULL));
    jogar();
    
    return 0;
}
