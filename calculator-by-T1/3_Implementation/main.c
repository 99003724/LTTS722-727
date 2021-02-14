#include "operations.h"

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Valid operations */
enum operations{ SQUARE, CUBE, SQUARE_ROOT, CUBE_ROOT, FACTORIAL,EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Square\n2. Cube\n3. Square_root\n4. Cube_root\n5. Factorial");
    printf("\n\tEnter your choice\n");
   
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case SQUARE:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1,
            square(calculator_operand1));
            getchar();
            break;
        case CUBE:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            cube(calculator_operand1));
            
            getchar();
            break;
        case SQUARE_ROOT:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            square_root(calculator_operand1));
            
            
            getchar();
            break;
        case CUBE_ROOT:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            cube_root(calculator_operand1));
            
           
            getchar();
            break;
        case FACTORIAL:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            factorial(calculator_operand1));
            
            
            getchar();
            break;   

        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((SQUARE <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
