// CS2211a 2020
// Assignment number: 2
// Your name: Julia Anantchenko
// Your student number: 251097696
// Your UWO User Name: janantch
// Date Completed: Oct 6 2020

#include <stdio.h>

// function for converting between km and m
void distance() 
{
    // constants and variables
    char direction;
    float input;
    float RATE = 1.609;

    // do while loop to keep prompting until input is valid
    do {
        printf("\nWhich direction is the conversion in? \n\n\tK for conversion from Kilometer to Mile\n\tM for conversion from Mile to Kilometer\n\n");
        scanf(" %c", &direction);
    } while (direction != 'K' && direction != 'M');

    // prompting for the value to convert
    printf("\nWhat is the value to convert?\n\n");
    scanf("%f", &input);

    // depending on the direction, prints the conversion
    if (direction == 'K')
        printf("\n%f kilometers is %f miles.\n\n", input, (input/RATE));
    if (direction == 'M')
        printf("\n%f miles is %f kilometers.\n\n", input, (input*RATE));
}

// function for converting between L and gallon
void liquid() 
{
    // constants and variables
    char direction;
    float input;
    float RATE = 3.785;

    // do while loop to keep prompting until input is valid
    do {
        printf("\nWhich direction is the conversion in? \n\n\tL for conversion from Litre to Gallon\n\tG for conversion from Gallon to Litre\n\n");
        scanf(" %c", &direction);
    } while (direction != 'L' && direction != 'G');

    // prompting for the value to convert
    printf("\nWhat is the value to convert?\n\n");
    scanf("%f", &input);

    // depending on the direction, prints the conversion
    if (direction == 'L')
        printf("\n%f litres is %f gallons.\n\n", input, (input/RATE));
    if (direction == 'G')
        printf("\n%f gallons is %f litres.\n\n", input, (input*RATE));
}

// function for converting between cm and inch
void length() 
{
    // constants and variables
    char direction;
    float input;
    float RATE = 2.54;

    // do while loop to keep prompting until the input is valid
    do {
        printf("\nWhich direction is the conversion in? \n\n\tC for conversion from Centimetre to Inch\n\tI for conversion from Inch to Centimetre\n\n");
        scanf(" %c", &direction);
    } while (direction != 'C' && direction != 'I');

    // prompting for the value to convert
    printf("\nWhat is the value to convert?\n\n");
    scanf("%f", &input);

    // depending on the direction, prints the conversion
    if (direction == 'C')
        printf("\n%f centimeters is %f inches.\n\n", input, (input/RATE));
    if (direction == 'I')
        printf("\n%f inches is %f centimeters.\n\n", input, (input*RATE));
}

// function for converting between celsius and fahrenheit
void temp() 
{
    // variables
    char direction;
    float input;

    // do while loop to keep prompting until the input is valid
    do {
        printf("\nWhich direction is the conversion in? \n\n\tC for conversion from Celsius to Fahrenheit\n\tF for conversion from Fahrenheit to Celsius\n\n");
        scanf(" %c", &direction);
    } while (direction != 'C' && direction != 'F');

    // prompting for the value to convert
    printf("\nWhat is the value to convert?\n\n");
    scanf("%f", &input);

    // depending on the direction, prints the conversion
    if (direction == 'C')
        printf("\n%f celsius is %f fahrenheit.\n\n", input, (input*(9/5)+32));
    if (direction == 'F')
        printf("\n%f celsuis is %f fahrenheit.\n\n", input, ((input-32)*(5/9)));
}

int main(void)
{
    // variables
    char conv; 
    int done = 0;

    // while loop to keep prompting for input until the user quits
    while (done == 0) {

        // prompting the user and receiving input
        printf("\n\nWhich conversion do you want to do? \n\n\t1 for conversion between Kilometer and Mile\n\t2 for conversion between Litre and Gallon\n\t3 for conversion between Centimeter and Inch\n\t4 for conversion between Celsius and Fahrenheit\n\t5 for quit\n\n");
        scanf(" %c", &conv);

        // switch statement for the different conversion options
        switch (conv) {
            case '1': 
                distance();
                break;
            case '2': 
                liquid();
                break;
            case '3': 
                length();
                break;
            case '4': 
                temp();
                break;
            case '5': 
                done = 1;
                break;
            default:
                printf("\nPlease enter a valid value.\n");
                break;
        }
    }

    // terminates
    return 0;
}