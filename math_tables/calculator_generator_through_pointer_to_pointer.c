#include<stdio.h>
#include<stdlib.h>

void table(int *arr, int num);

int main() {
    int a, b, c;
    printf("How many tables do you want to print: ");
    scanf("%d", &a);
    printf("Till what number you want the table to be: ");
    scanf("%d", &b);
    int arr[a][b];
    for(int i = 1; i <= a; i++){
        printf("------------------------\n");
        printf("Enter The number U want table of: ");
        scanf("%d", &c);
        table(arr[0], c);
    }


return 0;
}

void table(int *arr, int num){
    for(int i = 0; i<10; i++){
        arr[i] = num*(i+1);
    }
    printf("----------------------------\nTable of %d: \n\n", num);
    for(int j = 0; j<10; j++) {
        printf("%d X %d = %d\n", num, j+1, arr[j]);
        }
    }