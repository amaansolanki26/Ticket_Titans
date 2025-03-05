#include <stdio.h>
#include <string.h>

void login() {
    char username[20], password[20];
    
    char correct_username[] = "username";  
    char correct_password[] = "password";  

    
    printf("Enter username= ");
    scanf("%s", correct_username);

    printf("Enter password= ");
    scanf("%s", correct_password );

    
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
}

int main() {
    int choice;

    
    printf("Bus Management System\n");
    printf("please enter your choice=");
    scanf("%d", &choice);

    
    if (choice == 1) {
        login();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
