#include <stdio.h>
#include <ctype.h>

int main(){
   
    char password_array[17]; // setting the password limit to 16 and adding 1 for '\0'
    int user_password;
    int password_length;
    // Requirements for the password 
    int upper_case;
    int lower_case;
    int number_char;
    int special_char;


    // We need to check the password the user in inputting to make sure it is the right length 
    while (1)
    {
      password_length = 0; 

      printf("Please enter a password between 8 and 16 charaters in lenght. \n");

      // Reads line using getchar    
        while (1)
        {
            user_password = getchar();

            if (user_password == '\n'){
                break; // this should stop when the users presses enter
            }

            if (password_length < 16){
                password_array[password_length] = (char)user_password;
                password_length++;
            }
        }

        password_array[password_length] = '\0'; // this is now a valid C string

        // This will check the length to make sure it is between 8 and 16
        if (password_length < 8 || password_length > 16){
            printf("Password is invalid. Please use between 8 and 16 characters! \n");
            continue; // this restarts the loop 
        }

        // Resets the requirememts each time 
        upper_case = 0;
        lower_case = 0;
        number_char = 0;
        special_char = 0;

        for (int i = 0; i < password_length; i++)
        {
            if(isupper(password_array[i])) {
                upper_case = 1; // checks if there is an upper case character in the array, makes upper_case variable 1
            } else if (islower(password_array[i])) {
                lower_case = 1; // checks if there is a lower case character in the array, makes lower_case variable 1
            } else if (isdigit(password_array[i])) {
                number_char = 1; // checks if there is number character in the array, makes number_char variable 1
            }else {
                special_char = 1; // anything that is not a number of letter 
        }
    }

        // Now we must check that the password has these characters

        if (!upper_case || !lower_case || !number_char)
        {
            printf("Please check your password. It must contain at least: \n");
            printf("One upper case letter \n");
            printf("One lower case letter \n");
            printf("One number \n");
            continue; // this will restart the loop 
        }
        break;

    }
    
    // Password Validation 
    if (special_char){
        printf("This password is STRONG. %s has been accepted!", password_array );
    } else {
        printf("This password is WEAK, %s has still been accepted!", password_array);
    }
    
    return 0; 

}