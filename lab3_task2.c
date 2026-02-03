#include <stdio.h>

int main(){
    char password_array[17]; // setting the password limit to 16 and adding 1 for '\0'
    int user_password;
    int password_length = 0;

    printf("Please enter a password between 8 and 16 charaters in lenght. \n");

    // We need to check the password the user in inputting to make sure it is the right length 
    while (1)
    {
       user_password = getchar();

       if (user_password == '\n'){
        break; // this should stop when the users presses enter
       }

       if(password_length < 16){
        password_array[password_length] = (char)user_password;
        password_length++;
       }
    }

    password_array[password_length] = '\0'; // this is now a valid C string

    // This will check the length to make sure it is between 8 and 16
    if (password_length < 8 || password_length > 16){
        printf("Password is invalid. Please use between 8 and 16 characters! \n");
    }


}