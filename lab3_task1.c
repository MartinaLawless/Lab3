#include <stdio.h>
#include <ctype.h> // this is needed for 

int main()
{
    char temp_array[31]; // a temporary array that is long enough to hold a users input plus 1 for '\0'
    char user_input; // variable to store each character the user enters
    int i = 0;
    int non_alaphabet_counter = 0; 
    int maxed_out = 0;

    while (1){
        user_input = (char) getchar();
        if (user_input == '\n') break; // if we get to the end of the input the program stops 

        if (!isalpha((unsigned char) user_input)){ // If the character inputed by the user is not a letter i.e A - Z 
            non_alaphabet_counter++; // then increase the counter
        }

        if (i < 30){
            temp_array[i] = user_input;
            i++;
        } else {
            maxed_out = 1;
        }
    }

    // As we can see from the reflected_array below we need to add = '\0' to make temp_array a valid string 
    temp_array[i] = '\0'; // it is now a valid C string.
    
    if (maxed_out){
        printf("User Input has exceed its limit of 30 characters. Only the first 30 characters were saved. \n");
    }

    // the value of i represents the length of the user input
    // to create a reflected string we need twice the length

    char reflected_array[i*2 + 1]; // plus 1 to accommodate the \0 at the end of the string
    for (int j=0; j<i; j++){
        reflected_array[j] = temp_array[j];
        reflected_array[i*2-1-j] = temp_array[j];
    }
    reflected_array[i*2] = '\0'; // need to add NULL for this to be a valid string

    printf("The reflected string is: %s", reflected_array);
    printf("The number of non-alphabetic characrers is %d\n", non_alaphabet_counter);
    return 0;
}