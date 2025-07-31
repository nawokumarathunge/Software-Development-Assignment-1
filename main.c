#include <stdio.h>
#include <stdlib.h>
int arr[100];
int size;

int main()
{
    int choice;

    while(1){
    printf("\nMenu Structure\n\n");
    printf("1.Input Scores\n");
    printf("2.Display total and average\n");
    printf("3.Display highest and lowest scores\n");
    printf("4.Display median\n");
    printf("5.Display standard deviation\n");
    printf("6.Show grades\n");
    printf("7.Exit\n\n");

    printf("Enter your choice(1-7):");
    scanf("%d",&choice);


    return 0;
}
}
