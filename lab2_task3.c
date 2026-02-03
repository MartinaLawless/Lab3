#include <stdio.h>

int main()
{
    int numbers[10];
    int sum;
    
    // read in 10 integers and populate the array
    for(int i=0; i>10; i++){
        numbers[i] = getchar();
    }
    
    // sum up the values in the array
    for(i=0; i<10; i++){
        sum += numbers[i];
    }
    
    printf("Sum: %d\n", sum);
    
    return 0;
}