#include <stdio.h>
#include <string.h>
#include <math.h>
#include<conio.h>
int constants()
{   
    system ("color 9");

    int con;

    printf("\n");
    printf("---------------------------\n");
    printf("          Constants        \n");
    printf("---------------------------\n");

    printf("1. Physical Constants\n");
    printf("2. Atomic Constants\n");
    printf("3. Go Back\n");

    printf("Type of Constants: ");
    scanf("%d", &con);

    if (con == 1)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("     Physical Constants:   \n");
        printf("---------------------------\n");
        printf("1. The value of Pi\n");
        printf("2. Boltzmann Constant (K)\n");
        printf("3. Avogadro's Number (An)\n");
        printf("4. Gravitational Constant (G)\n");
        printf("5. Gas Constant (R)\n");
        printf("6. Plancks Constant (h)\n");
        printf("7. Gravity (g)\n");
    }
    else if (con == 2)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("      Atomic Constants:    \n");
        printf("---------------------------\n");
        printf("8. Mass of Proton\n");
        printf("9. Mass of Electron\n");
        printf("10. Mass of Neutron\n");
        printf("11. Rydberg's Constant\n");
    }
    else if (con == 3)
    {
        menu();
    }
    else
    {
        printf("Please enter a valid option");
    }
    
    if (con == 1 || con == 2)
    {
    int choice;
    
    printf("Constant: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\n3.142");
            constants();
        case 2:
            printf("\n1.38064852 x 10^-23 m^2 kg s^-2 K^-1");
            constants();
        case 3:
            printf("\n6.02214076 x 10^23");
            constants();
        case 4:
            printf("\n6.67408 x 10^-11 N m^2 Kg^-2");
            constants();
        case 5:
            printf("\n8.3144598 J mol^-1 K^-1");
            constants();
        case 6:
            printf("\n6.62607004 x 10^-34 m^2 kg/s");
            constants();
        case 7:
            printf("\n9.8 m/s^2");
            constants();
        case 8:
            printf("\n1.67262 x 10^-27 KG");
            constants();
        case 9:
            printf("\n9.10938356 x 10^-31 KG");
            constants();
        case 10:
            printf("\n1.674927471 x 10^-27 KG");
            constants();
        case 11:
            printf("\n1.0973731568508 x 10^7 m^-1");
            constants();
    }
    }
}
int converter()
{
    system ("color B");

    int con;

    printf("\n");
    printf("---------------------------\n");
    printf("      Unit Conversions     \n");
    printf("---------------------------\n");
    printf("\n");


    printf("1. Length Conversions\n");
    printf("2. Time Conversions\n");
    printf("3. Weight Conversions\n");
    printf("4. Temperature Conversions\n");
    printf("5. Volume Conversions\n");
    printf("6. Go Back\n");

    printf("Choose Conversion: ");
    scanf("%d", &con);

    if (con == 1)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("    Length Conversions     \n");
        printf("---------------------------\n");
        printf("1. cm to m\n");
        printf("2. m to cm\n");
        printf("3. m to km\n");
        printf("4. km to cm\n");
        printf("5. cm to km\n");
        printf("6. km to m\n");
    }
    else if (con == 2)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("      Time Conversions     \n");
        printf("---------------------------\n");
        printf("7. seconds to minutes\n");
        printf("8. seconds to hours\n");
        printf("9. minutes to hours\n");
        printf("10. hours to seconds\n");
        printf("11. hours to minutes\n");
    }
    else if (con == 3)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("    Weight Conversions     \n");
        printf("---------------------------\n");
        printf("12. g to kg\n");
        printf("13. kg to pounds\n");
        printf("14. g to pounds\n");
        printf("15. kg to g\n");
        printf("16. kg to tonne\n");
        printf("17. g to tonne\n");
        printf("18. pounds to tonne\n");
        printf("19. tonne to kg\n");
        printf("20. tonne to g\n");
        printf("21. tonne to pounds\n");
    }
    else if (con == 4)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("  Temperature Conversions  \n");
        printf("---------------------------\n");
        printf("22. C* to F*\n");
        printf("23. C* to K\n");
        printf("24. K to C*\n");
        printf("25. K to F*\n");
    }
    else if (con == 5)
    {
        printf("\n");
        printf("---------------------------\n");
        printf("     Volume  Conversions   \n");
        printf("---------------------------\n");
        printf("26. ml to litre\n");
        printf("27. litre to ml\n");
        printf("28. gallon to ounce\n");
        printf("29. ounce to gallon\n");
    }
    else if (con == 6)
    {
        menu();
    }
    else
    {
        printf("Please enter a valid option");
    }
    
    if (con == 1 || con == 2 || con == 3 || con == 4 || con == 5)
    {
    float value;
    int choice;

    printf("\nChoose Units: ");
    scanf("%d", &choice);

    printf("\nEnter a value to convert: ");
    scanf("%f", &value);


    switch (choice)
    {
            // Length Conversions
        case 1:
            printf("%.2f m", value/100);
            converter();
        case 2:
            printf("%.2f cm", value*100);
            converter();
        case 3:
            printf("%.2f km", value/1000);
            converter();
        case 4:
            printf("%.2f cm", value*100000);
            converter();
        case 5:
            printf("%.2f km", value/100000);
            converter();
        case 6:
            printf("%.2f m", value*1000);
            converter();

            // Time Conversions
        case 7:
            printf("%.2f minutes", value/60);
            converter();
        case 8:
            printf("%.2f hours", value/3600);
            converter();
        case 9:
            printf("%.2f hours", value/60);
            converter();
        case 10:
            printf("%.2f seconds", value*3600);
            converter();
        case 11:
            printf("%.2f minutes", value*60);
            converter();

            // Weight Conversions
        case 12:
            printf("%.2f KG", value/1000);
            converter();
        case 13:
            printf("%.2f Pounds", value*2.205);
            converter();
        case 14:
            printf("%.2f Pounds", value/454);
            converter();
        case 15:
            printf("%.2f Grams", value*1000);
            converter();
        case 16:
            printf("%.2f Tonnes", value/1000);
            converter();
        case 17:
            printf("%.2f Tonnes", value/1000000);
            converter();
        case 18:
            printf("%.2f Tonnes", value/2205);
            converter();
        case 19:
            printf("%.2f KG", value*907.185);
            converter();
        case 20:
            printf("%.2f Grams", value*907184.74);
            converter();
        case 21:
            printf("%.2f Pounds", value*2205);
            converter();

            // Temperature Conversions
        case 22:
            printf("%.2f F*", value*9/5+32);
            converter();
        case 23:
            printf("%.2f K", value+273.15);
            converter();
        case 24:
            printf("%.2f C*", value-273.15);
            converter();
        case 25:
            printf("%.2f F*", (value - 273.15)*9/5+32);
            converter();

            // Volume Conversions
        case 26:
            printf("%.2f litre", value/1000);
            converter();
        case 27:
            printf("%.2f ml", value*1000);
            converter();
        case 28:
            printf("%.2f Ounce", value*128);
            converter();
        case 29:
            printf("%.2f Gallons", value/128);
            converter();         
           
    }
    }




}
int main()
{
    menu(); 
}
int menu()
{
    system ("color A");
    char task;
    printf("\n");
    printf("--------------------------\n");
    printf("          Welcome         \n");
    printf("--------------------------\n");
    printf("What would you like to do?\n");
    printf("a. Conversion\n");
    printf("b. Universal Constants\n");
    printf("Choose your operation: ");
    scanf(" %c", &task);
    
    switch(task)
    {
        case 'a':
            converter();
        case 'b':
            constants();
        default:
            break;
    } 
}