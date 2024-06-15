#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int tableof, onetwothree, result, counting = 1, tuurn, a, b, newresult;
    char assking;
    do
    {
    printf("Enter 1 for multiplication tables and 2 for any particular 2 number multiplication: ");
    scanf("%d", &tuurn);
    switch (tuurn)
    {
    case 1:
        do
        {
        counting = 1;
        system("cls");
        printf("Which no. table do u want: ");
        scanf("%d", &tableof);
        system("cls");
        printf("Till what mark u want the table to be (10 recommended): ");
        scanf("%d", &onetwothree);
        system("cls");
        printf("Table of %d :-\n-----------------------------------\n", tableof);
          while (counting <= onetwothree)
        {
           result = counting * tableof;
           printf("%d X %d = %d\n", tableof, counting, result);
           counting++;
        }
        printf("------------------------------------------\nTable completed\n");
        printf("Do u wanna quit [y/n]: ");
        scanf(" %c", &assking);
        }while (assking == 'n');
        printf("\n\nEnter to quit.......");
        getch();
        exit(0);
        
        
        break;
    case 2:
        do
        {
        system("cls");
        printf("Enter the 2 numbers to multiply nd then enter: ");
        scanf("%d%d", &a, &b);
        newresult = a * b;
        system("cls");
        printf("Solution = %d", newresult);
        printf("\n-----------------------------------------\n");
        printf("Do u wanna quit [y/n]: ");
        scanf(" %c", &assking);
        }while (assking == 'n');
        printf("\nEnter to quit....");
        getch();
        exit(0);
        
        break;
    default:
        system("cls");
        printf("Invalid choice (Enter from 1 or 2).\n");
        system("cls");
        break;
    }
    } while (tuurn != 1 || tuurn != 2);
    
    
    

    return 0;
}