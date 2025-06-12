#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess(int n);
int main(){
    printf("\n");
    printf(":GUSSING THE NUMBER GAME:\n");
    printf("Press enter to continue...\n");
    getchar();
    printf(":RULES:\n");
    printf("Press enter for the rules...\n");
    getchar();
    printf("1.You have to choose any number between 1-100.\n");
    printf("2.You will be given hints to predict the number\n");
    printf("\n");
    printf("Press enter to continue...\n");
    getchar();
    srand(time(0));
    int Rnum = rand() % 100 + 1;
    guess(Rnum);
    printf("Press enter to close...\n");
    getchar();
    getchar();
    return 0;
}
void guess(int x){
    if(x % 2 == 0){printf("Hint: The number is even\n");}
    else{printf("Hint: The number is odd\n");}
    int num = -1;
    printf("Guess any number between 1-100:\n");
    while(num != x){
        scanf("%d", &num);
        if (num==x){printf("Congratulations!! You guessed the correct number! WELL DONE\n");} 
        else if(num>=(x-2) && num<=(x+2)){printf("Significant!!! You are very close, just +2 or -2\n");}
        else if(num>=(x-5) && num<=(x+5)){printf("YO!! Your number might be +5 or -5 to the real number\n");}
        else if(num>=(x-10) && num<=(x+10)){printf("YO!! Your number might be +10 or -10 to the real number\n");}
        else if (num>x){printf("Your number is too high\n");}
        else if (num<x){printf("Your number is too low\n");}      
}
}