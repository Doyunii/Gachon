#include <stdio.h>
void main ()
{
    int i;
    FILE *myfile;
    double price [2] = {139.24, 19.03};
    char description[][20] = {"Glove", "CD"};

    /* Write the product data stored in the description array and price array to the output file*/

    myfile = fopen ("products.txt", "w");
    if (myfile == NULL)
        printf ("Error opening file");
    
    else
        for (i = 0; i < 2; i++)
         {
            fprintf (myfile, "%-9s ", description[i]);
            fprintf (myfile, "%.2lf\n", price[i]);
        }
    fclose (myfile);

    /* Read the product data stored in the output file and print it to the screen*/
}