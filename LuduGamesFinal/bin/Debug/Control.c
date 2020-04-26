#include<stdio.h>
#include<stdlib.h>


int main()
{

    system("LuduGamesFinal.exe");

    FILE *fp = fopen("GameChoice.txt","r");

    int game_choice;

    fscanf(fp,"%d",&game_choice);
    printf("\n**%d",game_choice);

    //if(game_choice == 1)
}
