#include <stdio.h>
#include <string.h>

int main() {
    int number_of_items;
    printf("enter number of items: ");
    scanf("%d", &number_of_items);
    getchar();

    char item_name[number_of_items][50];
    int item_quantity[number_of_items];
    float item_price[number_of_items];

    for (int i = 0; i < number_of_items; i++) {
        printf("\nenter details of item %d\n", i +1);

        printf("name: ");
        fgets(item_name[i], 50, stdin);
        item_name[i][strcspn(item_name[i], "\n")] = '\0';

        printf("quantity: ");
        scanf("%d", &item_quantity[i]);

        printf("price: ");
        scanf("%f", &item_price[i]);
        getchar();
    }

    printf("\ninventory report:\n");
    printf("name\tquantity\tprice\ttotal value\n");
    for (int i = 0; i < number_of_items; i++) {
        float total_value = item_quantity[i] * item_price[i];
        printf("%s\t%d\t%.2f\t%.2f\n", item_name[i], item_quantity[i], item_price[i], total_value);
    }

    return 0;
}