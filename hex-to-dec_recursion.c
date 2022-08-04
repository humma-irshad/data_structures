#include <stdio.h>
#include <string.h>
#include <math.h>
#include <malloc.h>

void decimalToBase(int value, int targetBase, char *destination)
{
    if (value == 0)
        return;

    int remainder = value % targetBase;
    int quotient = value / targetBase;

    char map[] = "0123456789ABCDEF";

    decimalToBase(quotient, targetBase, destination);

    char character[] = {map[remainder], '\0'};
    strcat(destination, character);
}

void *changeBase(char source[], int sourceBase, int targetBase, char *destination)
{
    int decimal = 0;
    int length = strlen(source);

    // Converting to decimal for ease
    if (sourceBase != 10)
        for (int i = 0; i < length; i++)
        {
            char digit = (int)source[i];
            int digitValue;

            if (digit >= 48 && digit <= 57)
                digitValue = digit - 48;

            if (digit >= 65 && digit <= 70)
                digitValue = digit - 55;

            int power = length - i - 1;
            decimal += digitValue * pow(sourceBase, power);
        }
    else
        decimal = (int)atof(source);

    decimalToBase(decimal, targetBase, destination);
}

int main()
{
    char input[] = "111";
    char output[10] = "";

    changeBase(input, 2, 10, output);

    printf(output);
    return 0;
}