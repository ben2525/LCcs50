#include <cs50.h>
#include <stdio.h>
#include <string.h>

// function for counting letters in a string
int letterCounter(string theString)
{
    int counter =0;
    
    while(theString[counter] != '\0')
    {
        counter++;
    }
    
    return counter;
}


int main(void)
{
    int myStringLength;

    printf("Please enter a string :  \n");

    // get a string (a line of characters)
    string s = GetString();
    
    // call function
    myStringLength = letterCounter(s);
    
    printf("%d characters long.\n", myStringLength);
  
}