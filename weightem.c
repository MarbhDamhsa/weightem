#include <stdio.h>

void displayMenu()
{
    printf("1.  Pounds to Kilos\n");
    printf("2.  Kilos to Pounds\n");
    printf("3.  Ounces to Grams\n");
    printf("4.  Grams to Ounces\n");
    printf("5.  Exit -- Do nothing (default)\n\n");
}//displayMenu

void weightConversion(int choice)
{
    float kilo, pound, ounce, gram;
    switch(choice)
    {
        //Pounds to Kilograms
        case 1:
            printf("Enter the number of pounds to convert: ");
            scanf("%f", &pound);
            kilo = (pound * 0.4536);
            printf("\nAnswer: %f pounds is %f kilograms\n\n", pound, kilo);
            break;

        //Kilograms to Pounds
        case 2:
            printf("Enter the number of kilograms to convert: ");
            scanf("%f", &kilo);
            pound = (kilo / 0.4536);
            printf("\nAnswer: %f kilograms is %f pounds\n\n", kilo, pound);
            break;

        //Ounces to Grams
        case 3:
            printf("Enter the number of ounces to convert: ");
            scanf("%f", &ounce);
            gram = (ounce * 28.35);
            printf("\nAnswer: %f ounces is %f grams\n\n", ounce, gram);
            break;

        //Grams to Ounces
        case 4:
            printf("Enter the number of grams to convert: ");
            scanf("%f", &gram);
            ounce = (gram / 28.35);
            printf("\nAnswer: %f grams is %f ounces\n\n", gram, ounce);
            break;
 
        default:
            break;
    }//switch

}//weightConversion

int main(void)
{
    int choice;
    printf("Welcome to weightem. The program will convert weights ");
    printf("from english to metric or metric to english. ");
    printf("Indicate which conversion from the selection table below.\n\n");

    displayMenu();

    printf("Your choice: ");
    scanf("%d", &choice);

    weightConversion(choice);

    printf("Thank you for using weightem. Bye!\n");

    return 0;
}
