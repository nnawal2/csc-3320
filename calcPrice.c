#include<stdio.h>

int main(void){

        int itemNumber;
        double unitPrice;
        int quantity;
        char purchaseDate[12];

        //get user input
        printf("Enter item number: ");
        scanf("%d", &itemNumber);
        printf("Enter unit price: ");
        scanf("%lf", &unitPrice);
        printf("Enter quantity:");
        scanf("%d", &quantity);
        printf("Enter purchase date (mm/dd/yyyy): ");
        scanf("%s", purchaseDate);

        //printing data
        printf("Item\tUnit Price\tQTY\tPurchase Date\tTotal Amount\n");
        printf("%d\t$%9.2lf\t%d\t%s\t$%9.2lf\n\n", itemNumber, unitPrice, quantity, purchaseDate, unitPrice * quantity);
        return 0;

}
