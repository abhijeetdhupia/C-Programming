/*Conversion of Fahernheit to Celsius 
  C = (F - 32)/1.8  
 
 by Abhijeet Dhupia 
 March 11, 2021
 */ 

#include<stdio.h> 
int main(void){

    int fahrenheit, celsius; 

    printf("\nPlease enter fahreneit as an integer:"); 
    scanf("%d", &fahrenheit); 
    celsius = (fahrenheit - 32)/1.8; 
    printf("\n %d fahrenheit is %d in celsius. \n",fahrenheit, celsius); 
    return 0; 
}


