/*
 Author: Miguel Rodriguez
 Subject: CSC344
 Date: 9/17/2016

*/

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    //initializes a character
    char temp;

    //places pointer 'a' in temp
    temp = *a;

    //places pointer 'b' in pointer 'a'
    *a = *b;

    //places temp in pointer b
    *b = temp;
}

void getPermutations(char *a, int i, int n) {

    //creates an integer variable name j
    int j;

    if(i == n) {

        //displays a
        printf("%s\n", a);

    }//ends if
    else
    {
        for(j = i; j <= n; j++)
        {
            //swaps and permutes
            swap(a + i, a + j);
            getPermutations(a, i + 1, n);
            swap(a + i, a + j);

        }//ends for loop

    }//ends else
}

int main(void) {

    //creates a character array of size 100
    char a[100];

    //asks the user for input
    printf("Please enter a string for permutation: ");
    gets(a);

    //passes the value to the function and calls the function
    getPermutations(a, 0, strlen(a) - 1);


    return 0;
}
