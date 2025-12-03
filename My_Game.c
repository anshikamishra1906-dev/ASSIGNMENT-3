//rock,paper & scissors
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    int player,computer=rand() % 3;
    //0->stone
    //1->paper
    //2->scissors
    printf("choose 0 for rock,\nchoose 1 for paper,\nchoose 2 for scissors\n");
    printf("Your choice:");
    scanf("%d",&player);
    printf("Computer chose:%d \n",computer);

    if(player==0 && computer==0) {
        printf("It's a draw!\n");
    }
    else if(player==0 && computer==1) {
        printf("You loose!\n");
    }
    else if(player==0 && computer==2) {
        printf("You Won!\n");
    }
    else if(player==1 && computer==0) {
        printf("You Won!\n");
    }
    else if(player==1 && computer==1) {
        printf("It's a draw!\n");
    }
    else if(player==1 && computer==2) {
        printf("You loose!\n");
    }
    else if(player==2 && computer==0) {
        printf("You loose!\n");
    }
    else if(player==2 && computer==1) {
        printf("You Won!\n");
    }
    else if(player==2 && computer==2) {
        printf("It's a draw!\n");
    }
    else {
        printf("Something went wrong :)");
    }
    return 0;
}



