#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Needed for sqrt() function

//Global Variables
int arr[100]; //Array to store up to 100 student scores
int size; //Variable to store the number of students

int inputMarks(); //Function to input student marks
int displayTotalAndAverage(); //Function to display total and average
int displayHighestAndLowest(); //Function to display highest and lowest mark
int displayMedian(); //Function to display median
int displayStandardDeviation(); //Function to display standard deviation


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
        break;

    case 2:
        displayTotalAndAverage(); //Call to function  display total and average
        break;

    case 3:
        displayHighestAndLowest(); //Call to function display highest and lowest mark
        break;

    case 4:
        displayMedian(); //Call to function display median
        break;

    case 5:
        displayStandardDeviation(); //Call to function display standard deviation
        break;

    case 6:
    case 7:



    }
    }


    return 0;
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
int displayTotalAndAverage(){
    int i;
    int total=0;
    float average=0;

    // Loop through all entered marks to calculate total
    for(i=0;i<size;i++){
        total+=arr[i];
    }
    // Calculate average by dividing total by number of marks
    average=(float)total/size; //Cast to float for decimal precision


    printf("Total:%d\n",total);
    printf("Average:%.2f\n",average);

    return 0;
}
int displayHighestAndLowest(){
    int i;
    int maximum=arr[0];
    int minimum=arr[0];

    for(i=1;i<size;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    printf("Highest mark is:%d\n",maximum);
    printf("Lowest mark is:%d\n",minimum);

    return 0;
}
void sortArray(int a[], int n) {
    for (int i=0; i<n-1;i++) {
        for (int j=0; j<n-1-i;j++) {
            if (a[j]>a[j+1]) {

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int displayMedian() {
    if (size==0) {
        printf("No marks entered yet!\n");
        return 0;
    }

    int temp[100]; // Temporary array to hold copy of marks
    for (int i=0; i<size;i++) {
        temp[i]=arr[i];
    }

    sortArray(temp,size); // Sort the copied array

    float median;
    if (size % 2 == 0) {
        // Even number of elements
        median = (temp[size/2-1] + temp[size/2]) / 2.0;
    } else {
        // Odd number of elements
        median = temp[size/2];
    }

    printf("Median: %.2f\n", median);

    return 0;
}
int displayStandardDeviation() {
    if (size==0) {
        printf("No marks entered yet!\n");
        return 0;
    }

    float sum=0;
    float mean;
    float standardDev=0;

    for (int i=0; i<size;i++) { // Calculate total sum
        sum+=arr[i];
    }

    mean = sum/size;  // Calculate total sum

    for (int i=0;i<size;i++) {
        standardDev += (arr[i]-mean)*(arr[i]-mean);
    }

    standardDev=sqrt(standardDev/size); //Calculate standard Deviation

    printf("Standard Deviation: %.2f\n", standardDev);
    return 0;
}



