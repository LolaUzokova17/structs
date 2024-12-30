#include <stdio.h>

struct User {
    char first_name[50];
    char last_name[50];
    int birth_year;
    char location[50];
    char phone[20];
};

int main() {
    struct User users[] = {
        {"John", "Doe", 1990, "Tashkent", "+998901234567"},
        {"Jane", "Smith", 1985, "Samarkand", "+998901234568"},
        {"Ali", "Karimov", 2000, "Bukhara", "+998901234569"}
    };

    int num_users = sizeof(users) / sizeof(users[0]);
 
    printf("Foydalanuvchilar Jadvali\n");
    printf("First Name | Last Name | Birth Year | Location | Phone\n");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < num_users; i++) {
        printf("%-10s | %-9s | %-10d | %-8s | %-15s\n",
               users[i].first_name, users[i].last_name, users[i].birth_year,
               users[i].location, users[i].phone);
    }

    return 0;
}
