#include <stdio.h>

int addition(int num1, int num2){
    return num1 + num2;
}
int subtraction(int num1, int num2){
    return num1 - num2;
}
int multiplication(int num1, int num2){
    return num1 * num2;
}

int division (int num1, int num2){
    if (num2 != 0){
        return num1 / num2;
    } 
    else {
        printf("Invalid value.\n");
        return 0; 
    }
}


int main(){//shannisa added add

    int choice;

    do{
        int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("What do you want to do? (1 Addition, 2 Subtraction, 3 Multiplication, 4 Division): ");
    scanf("%d", &choice);

    if (choice == 1){
        sum = addition(num1, num2);
        printf("The sum is: %d\n", sum);
    }
    else if (choice == 2){
        sum = subtraction(num1, num2);
        printf("The difference is: %d\n", sum);
    }
    else if (choice == 3){
        sum = multiplication(num1, num2);
        printf("The product is: %d\n", sum);
    }
    else if (choice == 4){
        sum = division(num1, num2);
        if (num2 != 0){
            printf("The quotient is: %d\n", sum);
        }
    }
    else {
        printf("Invalid choice.\n");
    }

    printf("Wanna continue? (1 for Yes / 0 for No): ");
    scanf("%d", &choice);

}while(choice == 1);

    return 0;
}