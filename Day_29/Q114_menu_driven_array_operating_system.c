#include <stdio.h>

int main() {
    int array_size;
    printf("enter size of array: ");
    scanf("%d", &array_size);

    int array_elements[array_size];
    printf("enter elements of array:\n");
    for (int i = 0; i < array_size; i++)
        scanf("%d", &array_elements[i]);

    int user_choice;

    do {
        printf("\n1. display array\n");
        printf("2. find sum of array\n");
        printf("3. find largest element\n");
        printf("4. find smallest element\n");
        printf("5. exit\n");
        printf("enter your choice: ");
        scanf("%d", &user_choice);

        switch (user_choice) {
            case 1:
                printf("array elements are: ");
                for (int i = 0; i < array_size; i++)
                    printf("%d ", array_elements[i]);
                printf("\n");
                break;

            case 2: {
                int sum = 0;
                for (int i = 0; i < array_size; i++)
                    sum = sum + array_elements[i];
                printf("sum of array is %d\n", sum);
                break;
            }

            case 3: {
                int largest = array_elements[0];
                for (int i = 1; i < array_size; i++) {
                    if (array_elements[i] > largest)
                        largest = array_elements[i];
                }
                printf("largest element is %d\n", largest);
                break;
            }

            case 4: {
                int smallest = array_elements[0];
                for (int i = 1; i < array_size; i++) {
                    if (array_elements[i] < smallest)
                        smallest = array_elements[i];
                }
                printf("smallest element is %d\n", smallest);
                break;
            }

            case 5:
                printf("exiting program\n");
                break;

            default:
                printf("invalid choice\n");
        }

    } while (user_choice != 5);

    return 0;
}