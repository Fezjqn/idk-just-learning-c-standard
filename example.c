#include <stdio.h>
#define TIMES		10

/*
* Tell the compiler that we intend
* to use a function called show_message
* It has no arguments and returns no value
* This is the "declaration".
*/

void show_message(void);
/*
* Another function, but this includes the body of
* the function. This is a "definition"'.
*/
int main(){
	int count;
	
	count = 0;
	while(count < TIMES){
		show_message();
		count = count + 1;
	}
		
	return(0);
}

/*
* The body of the simple function
* This is now a "definition"
*/
void show_message(void){
	printf("wachiwachiwa\n");
}
