#include <stdio.h>
#include <stdlib.h> //random integer srand
#include <time.h>
// printf("The random number between 0 and 3 is %d\n", GenerateRandomNumber(3));

const char *GenerateRandomNumber()
{
    int a;
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    a = rand() % 3;
    if (a == 0)
    {
        return "ROCK";
    }
    else if (a == 1)
    {
        return "PAPER";
    }
    else if (a == 2)
    {
        return "SCISSOR";
    }
}
void game()
{
    int no_of_times = 1;
    int size_of_array = 50;
    int counter_computer = 0;
    int counter_player = 0;
    int counter_draw = 0;
    char *computers_choice;
    char *name;
    name = (char *)malloc((size_of_array + 1) * sizeof(char));
    computers_choice = (char *)malloc((size_of_array + 1) * sizeof(char));
    printf("\n          Enter PLAYERS'S Name         \n");
    scanf("%s", name);
    while (no_of_times <= 3)
    {
        char players_choice;
        printf("\n          %s's Turn:      \n", name);
        printf("* Press 'R or r' for ROCK 'P or p' for PAPER and 'S or s' for SCISSOR *\n");
        getchar();
        scanf("%c", &players_choice);
        printf("           COMPUTER'S TURN          \n");
        computers_choice = GenerateRandomNumber();
        printf("       computer's choice: %s\n", computers_choice);
        if (computers_choice == "ROCK")
        {
            if (players_choice == 'r' || players_choice == 'R')
            {
                printf("_____________  DRAW ____________\n");
                counter_draw = counter_draw + 1;
            }
            else if (players_choice == 'p' || players_choice == 'P')
            {
                printf("_____________  %s WIN __________\n", name);
                counter_player++;
            }
            else if (players_choice == 's' || players_choice == 'S')
            {
                printf("_____________  %s LOSE __________\n", name);
                counter_computer++;
            }
        }
        if (computers_choice == "PAPER")
        {
            if (players_choice == 'r' || players_choice == 'R')
            {
                printf("____________  %s LOSE ___________\n", name);
                counter_computer++;
            }
            else if (players_choice == 'p' || players_choice == 'P')
            {
                printf("____________  DRAW _____________\n");
                counter_draw = counter_draw + 1;
            }
            else if (players_choice == 's' || players_choice == 'S')
            {
                printf("____________  %s WIN ____________\n", name);
                counter_player++;
            }
        }
        if (computers_choice == "SCISSOR")
        {
            if (players_choice == 'r' || players_choice == 'R')
            {
                printf("____________ %s WIN _____________\n", name);
                counter_player++;
            }
            else if (players_choice == 'p' || players_choice == 'P')
            {
                printf("____________  %s LOSE ___________\n", name);
                counter_computer++;
            }
            else if (players_choice == 's' || players_choice == 'S')
            {
                printf("____________  DRAW _____________\n");
                counter_draw = counter_draw + 1;
            }
        }
        printf("\n\n****************SCORE BOARD*********\n");
        printf("__________computers score:%d\n__________%s's score:%d\n__________Total draw's:%d\n", counter_computer, name, counter_player, counter_draw);

        no_of_times++;
    }
    if (counter_draw > counter_computer && counter_computer == counter_player)
    {
        printf("\n_________________FINAL RESULT________________\n");
        printf("_________________DRAW________________\n");
    }
    else if (counter_player > counter_computer)
    {
        printf("\n_________________FINAL RESULT________________\n");
        printf("_________________%s WON________________\n", name);
    }
    else
    {
        printf("\n_________________FINAL RESULT________________\n");
        printf("_________________%s LOSE________________\n", name);
    }
    free(name);
    free(computers_choice);
}
int main()
{
    int input;

start:
    while (1)
    {

        printf("\n**************** HOME ****************\n\n           1>START GAME \n           2>QUIT   \n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            goto end;
        default:
            goto start;
        }
    }
end:
    printf("\n************************************************\n************** Thanks For Playing **************\n\n");
    return 0;
}