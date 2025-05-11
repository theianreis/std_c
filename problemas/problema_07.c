#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //Declare variable
    int value, value_module ;
    
    //Read Values
    printf("what value to evaluate: ");
    scanf("%d",&value);
    
    //evaluate value
    if (value>0){
        printf("Value = %d",value);
    }
    else{
        value_module = value*(-1);
        printf("Value = %d", value_module);
    }
    
    return 0;
}