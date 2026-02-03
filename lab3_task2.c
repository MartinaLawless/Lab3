#include <stdio.h>
#include <ctype.h>

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

    // This will check that the password has the right characters
    int upper_case = 0;
    int lower_case = 0;
    int number_char = 0;
    int special_char = 0;

    for (int i = 0; i < password_length; i++)
    {
        if(isupper(password_array[i])) upper_case = 1; // checks if there is an upper case character in the array, makes upper_case variable 1
        else if (islower(password_array[i])) lower_case = 1; // checks if there is a lower case character in the array, makes lower_case variable 1
        else if (isdigit(password_array[i])) number_char = 1; // checks if there is number character in the array, makes number_char variable 1
        else special_char = 1; // anything that is not a number of letter 
    }

    // Now we must check that the password has these characters

    if (!upper_case || !lower_case || !number_char)
    {
        printf("Please check your password. It must contain at least: \n");
        printf("One upper case letter \n");
        printf("One lower case letter \n");
        printf("One number \n");
    }

    
    


    




}