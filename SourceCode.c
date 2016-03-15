#include <stdio.h>
#include <stdlib.h>

/*
This program asks the user to enter a temperature
reading in centigrade and then prints the equivalent
Fahrenheit value. It then prompts the user for a Fahrenheit
value and returns the equivalent in Celsius/centigrade. 03/14/2016*/

//prototypes
float get_c      (float *celsius);
float get_f      (float *fahrenheit);
float cel_to_fah (float celsius);
float fah_to_cel (float fahrenheit);
float display_F  (float celsius, float fahrenheit);
float display_C  (float fahrenheit, float celsius);

int main (void)
{
    //variable declaration
    float celsius = 0;                //stores degree Celsius
    float fahrenheit = 0;             //stores degree Fahrenheit
    float celsius_converted = 0;      //Celsius converted value
    float fahrenheit_converted = 0;   //Fahrenheit converted value
    //function calls
    get_c (&celsius);
    get_f (&fahrenheit);
    //===============================
    fahrenheit_converted = cel_to_fah (celsius);
    celsius_converted = fah_to_cel (fahrenheit);
    //===============================
    display_F (celsius, fahrenheit_converted);
    display_C (fahrenheit, celsius_converted);

    return 0;
}
//===================================================================
float get_c (float *celsius)
{
    printf("Please enter a degree Celsius:       ");
    scanf("%f", celsius);

    return 0;
}//get_c

float get_f (float *fahrenheit)
{
    printf("Please enter a degree Fahrenheit:    ");
    scanf("%f", fahrenheit);

    return 0;
}//get_f

//===================================================================
float cel_to_fah (float celsius)
{
    return (1.8 * celsius)  + 32;
}//cel_to_fah

float fah_to_cel (float fahrenheit)
{
    return 5 * (fahrenheit - 32) / 9;
}//fah_to_cel

//===================================================================
float display_F (float celsius, float fahrenheit)
{
    printf("=======================================\n");
    printf("%.2f Celsius in Fahrenheit is:   %.2f\n", celsius, fahrenheit);
    return fahrenheit;
}//display_F

float display_C (float fahrenheit, float celsius)
{
    printf("=======================================\n");
    printf("%.2f Fahrenheit in Celsius is:    %.2f\n", fahrenheit, celsius);
    printf("=======================================\n");
    return celsius;
}//display_C
