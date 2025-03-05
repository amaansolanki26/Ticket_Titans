#include <stdio.h>
#include <string.h>

void login() {
    char username[20], password[20];
    
    char correct_username[] = "sandeep kumar";  
    char correct_password[] = "5678";  

    
    printf("Enter username= ");
    scanf("%s", username);

    printf("Enter password= ");
    scanf("%s", password);

    
    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
}

int main() {
    int choice;

    
    printf("Bus Management System\n");
    printf("Press 1 to login\n");
    scanf("%d", &choice);

    
    if (choice == 1) {
        login();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
