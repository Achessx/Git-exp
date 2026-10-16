#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num,guess;
    srand(time(NULL));
    start:
    int attempts=5;
    num=rand()%100+1;
    do{
        printf("Guess a number between 1 and 100: ");
        scanf("%d",&guess);
         attempts--;
        if(guess>num){
            printf("Too high! Try again.\n");
        }
        else if(guess<num){
            printf("Too low! Try again.\n");
        }
        else{
            printf("Congratulations! You guessed the number in %d attempts left.\n",attempts);
            
        }
       
    }
        while(attempts>=1 && guess!=num);
        if (guess == num) {
        printf("You won!\n");
         }  else {
          printf("Game over! The number was %d.\n", num);
        }
        printf("Do you want to play again? (y/n): ");
        char choice;
        scanf(" %c",&choice);
        if(choice=='y' || choice=='Y'){
            goto start;
        }
        return 0;
}