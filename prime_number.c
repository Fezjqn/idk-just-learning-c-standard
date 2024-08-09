/*
*
* Dumb program that generates prime numbers.
*/
#include <stdio.h>
#define COUNTER_PRIME		10000
#define	NUMBER			1

int main(){
	int this_number, divisor, not_prime;
	
	this_number = 3;
	while(this_number < COUNTER_PRIME){
		divisor = this_number / 2;
		not_prime = 0;
		while(divisor > NUMBER){
			if(this_number % divisor == 0){
				not_prime = 1;
				divisor = 0;
			}
			else
				divisor = divisor-1;
		}
		if(not_prime == 0)
			printf("%d is a prime number\n", this_number);
		this_number = this_number + 1;
	}
	return(0);
}
