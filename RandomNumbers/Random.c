/*
 Author: Miguel Rodriguez
 Subject: CSC344
 Date: 9/17/2016

*/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int randomNum;  //random number to be generated
    int fRange;     //first number in the range
    int lRange;     //last number in the range
    int num;        //stores the numbers of numbers
    int i;          //creates a counter for the for loop
    int j;          //creates a counter for the second for loop


    srand((unsigned)time(NULL));  //creates a randomizer using the comps clock

    //provides instructions to the user

    printf("The default numbers to be generated are 10\n");
    printf("The default range is 1 to 100 inclusive\n");


    //asks for first input
    printf("Please enter the number of numbers to be generated or 1 for default: ");
    scanf("%d",&num);

    if(num == 1)
    {

        num = 10;
    }

    //asks for second input
    printf("Please enter the first number of the range inclusive or 1 for default: ");
    scanf("%d", &fRange);

    if(fRange == 1)
    {
        fRange = 1;

    }

    //asks for third input
    printf("Please enter the second number of the range inclusive or 1 for default: ");
    scanf("%d", &lRange);

    if(lRange == 1)
    {

        lRange = 100;

    }

    int array[num];  //array is initialize to whatever the users enters for variable num

    for(i = 0; i < num; i++)
    {
        //generates number from within a specific range
        randomNum = rand() % (lRange + 1 - 0) + fRange;

        array[i] = randomNum;

    }//ends for loop

    printf("The numbers of numbers to generate are %d and the range is from %d to %d \n ",num,fRange,lRange);
    printf("Listed below are the numbers: ");

    for(j=0; j<num; j++)
    {

        //prints every element in the array
        printf("\n %d ", array[j]);
    }


	return(0); //makes sure that the programs terminates successfully


}//ends main method
