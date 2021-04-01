/* The distance of a marathon in kilometeres
 by Abhijeet Dhupia 
 March 11, 2021 
 */ 

#include <stdio.h>

int main(void)
{
	int miles = 26, yards = 385; 
	double kilometers; 

	kilometers = 1.6099 * (miles + yards / 1760.0); 
	printf("\nA marathon is %lf kilometers.\n\n", kilometers); 
	return 0; 
} 


