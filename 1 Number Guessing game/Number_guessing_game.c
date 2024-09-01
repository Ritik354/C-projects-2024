#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    //number guessing function
    srand(time(NULL));
    printf("WELCOME TO THE WORLD OF GUESSING NUMBERS\n");
    random = rand()%100+1;
    printf("%d",random);
    do{
        printf("Please enter you guess between (1 to 100) :");
        scanf("%d",&guess);
        no_of_guess ++;
        if(guess<random)
        {
            printf("Guess a larger number.\n");
        }else if(guess>random)
        {
            printf("Guess a smaller number.\n");
        }else
        {
            printf("Congratulations!!\nYou have successfully guessed the number in %d attempts",no_of_guess);
        }
    }
    while(guess != random);
    
    printf("Bye Bye Thanks for playing\n.");
    return 0;
}