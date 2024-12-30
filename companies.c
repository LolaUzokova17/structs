#include <stdio.h>
#include <string.h>

struct Company {
    char name[100];
    char location[100];
};

struct Product {
    char name[100];
    float price;
    int quantity;
    struct Company company;
};

void displayProducts(struct Product products[], int num_products) {
    printf("AQShda ishlab chiqarilgan mahsulotlar:\n");
    printf("Name         | Price | Quantity | Company Name | Company Location\n");
    printf("-------------------------------------------------------------------\n");

    for (int i = 0; i < num_products; i++) {
        printf("%-12s | %-5.2f | %-8d | %-12s | %-15s\n", 
                products[i].name, 
                products[i].price, 
                products[i].quantity, 
                products[i].company.name, 
                products[i].company.location);
    }
}

int main() {
    struct Company company1 = {"Company A", "USA"};
    struct Company company2 = {"Company B", "USA"};

    struct Product products[2] = {
        {"Product 1", 50.0, 100, company1},
        {"Product 2", 30.0, 200, company2}
    };

    displayProducts(products, 2);

    return 0;
}
