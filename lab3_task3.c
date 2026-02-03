#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;
    int user_input;
    
    // read in 10 integers and populate the array
    for(int i=0; i<10; i++){ // fixed error in loop condition. Replaced '>' with '<'
        // Asking the user to input number
        printf("Please enter a numbner between 0 and 9: ");
        user_input = getchar();
        int next_char = getchar();


        // Inserting user input validation 
        while (1){
            if (user_input >= '0' && user_input <= '9' && next_char == '\n') 
            {
                numbers[i] = user_input - '0';
                break;
            }else {
            // lets the user know the input is invalid
            printf("Invalid. Please enter a number between 0 and 9: ");}

            // This will clear leftover characters before retrying 
            while (next_char != '\n') {
                next_char = getchar();
            };

            // read again
            user_input = getchar();

            
        }
        
        while (getchar()!= '\n'); // This will clear new lines after the user has made a valid input 

    }
    
    // sum up the values in the array
    for(int i=0; i<10; i++){  // added missing int 
        sum += numbers[i];
    }
    
    printf("Sum: %d\n", sum);
    
    return 0;
}