#include <stdio.h>
#include <stdlib.h>
//Global Variables
int arr[100]; //Array to store up to 100 student scores
int size; //Variable to store the number of students

int inputMarks(); //Function to input student marks

int main()
{
    int choice; //Variable to store user's menu choice

    //Main program loop-continuous until user choose to exit
    while(1){
    //Display the main menu
    printf("\nMenu Structure\n\n");
    printf("1.Input Scores\n");
    printf("2.Display total and average\n");
    printf("3.Display highest and lowest scores\n");
    printf("4.Display median\n");
    printf("5.Display standard deviation\n");
    printf("6.Show grades\n");
    printf("7.Exit\n\n");

    //Get user's choice
    printf("Enter your choice(1-7):");
    scanf("%d",&choice);

    //Use switch case
    switch(choice){
    case 1:
        inputMarks(); //Call to function input marks

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:



    }


    return 0;
}
}
int inputMarks()
{
    int i;

    //Get the number of marks to be entered
    printf("Enter number of marks that you are going to enter:");
    scanf("%d",&size);

    for(i=0;i<size;i++){
        int mark;

        while(1) {//keeps asking until valid mark is entered
                printf("Enter mark %d:",i+1);
        scanf("%d",&mark);

        if(mark>=0 && mark<=100){ //Check if mark is within valid range (0-100)
            arr[i]=mark;

            break; //Exit the validation loop
        }else{
            printf("Invalid mark! Please enter a value between 0 and 100\n"); //Display error message for invalid mark

        }
    }


}
    return 0;
}

