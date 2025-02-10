
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int generatenum()
{ 
    int n = 100;
    srand(time(0)); 
    return rand() % n + 1; 
}

int main()
{
    int number; 
    int  attempts =1 ; 
    printf("Guess a number between (1 to 100)\n");
    scanf("%d", &number);

    int n = generatenum();

    for (int i=0; i<1; i++)
    {
        if(number > 100)
        {
            printf("Please enter a number between 1 to 100\n");
            scanf("%d", &number);
            break;
        }
    }

    label:

    if(n == number)
    {

        printf("Congratulations! You guessed it right in %d attempts\n", attempts);
        printf("Thanks for playing\n");
        printf( "Made by Dhairya Gupta\n");
        goto end;
        
    }
   
     while(n!=number)
     {
        attempts++;
     if(n > number)
    {
        printf("You guessed it wrong, the number is greater\n");
       
    }
    else if((n < number))
    {
        printf("You guessed it wrong, the number is smaller\n");
        
    } 
    printf("Guess again: \n");
    scanf("%d", &number);
    break;
     }
    goto label;  
  
    end:
return 0;

}