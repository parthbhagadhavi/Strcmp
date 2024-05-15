






#include <stdio.h>
#include <string.h>

int main() {
    char email[50], password[50];
    char desiredEmail[] = "admin@gmail.com";
    char desiredPassword[] = "123456";

    printf("Enter your email: ");
    scanf("%s", email);

    printf("Enter your password: ");
    scanf("%s", password);


    if (strcmp(email, desiredEmail) == 0 && strcmp(password, desiredPassword) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}

    