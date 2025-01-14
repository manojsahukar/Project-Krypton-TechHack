#include <stdio.h>

void main()
{
    char b[26], code[3], msg[30];
    int i, n, j, index;

    // Prompt user to enter a 3-letter code in uppercase
    puts("Enter the 3 letter code in CAPs:__=__");
    gets(code);

    // Calculate the starting index based on the first letter of the code
    n = code[0] - 65;

    index = n;

    i = 1;

    // Initialize the array with the third letter of the code
    b[n] = code[2];

    // Fill the array with decreasing values from the third letter of the code
    while (b[n] != 'A' && n != 25)
    {
        b[n + 1] = code[2] - i;
        i++;
        n++;
    }

    n = n + 1;

    printf("n=%d\n\n", n);

    // If the array is filled and ends with 'A'
    if (n == 26 && b[25] == 65)
    {

        j = 0;
        i = 0;

        // Fill the remaining part of the array with decreasing values from 'Z'
        while (j != index)
        {
            b[j] = 90 - i;
            j++;
            i++;
        }
    }
    // If the array is filled but does not end with 'A'
    else if (n == 26)

    {

        b[0] = b[25] - 1;

        i = 2;
        j = 0;

        // Fill the array with decreasing values from the last element
        while (b[j] != 'A')
        {
            b[j + 1] = b[25] - i;
            i++;
            j++;
        }

        i = 0;

        // Fill the remaining part of the array with decreasing values from 'Z'
        while (j != index)
        {
            b[j + 1] = 90 - i;
            j++;
            i++;
        }
    }
    // If the array is not completely filled
    else

    {

        i = 0;

        // Fill the remaining part of the array with decreasing values from 'Z'
        while (n != 26)
        {
            b[n] = 90 - i;
            i++;
            n++;
        }

        n = 0;

        // Fill the remaining part of the array with decreasing values from 'Z'
        while (n != index)
        {
            b[n] = 90 - i;
            i++;
            n++;
        }
    }

    // Print the filled array
    puts(b);
    puts("\n\n");

    // Prompt user to enter a message to encode or decode
    puts("Enter the msg to encode or decode");
    gets(msg);

    puts("\n\n");

    i = 0;
    // Encode or decode the message using the filled array
    while (msg[i] != NULL)
    {
        index = msg[i] - 65;
        if (index > 25 || index < 0)
            printf("%c", msg[i]);
        else
            printf("%c", b[index]);
        i++;
    }

    // Print the author's name
    printf("\n\n\n\nprogrammed by:\nMANOJ SAHUKAR");
}
