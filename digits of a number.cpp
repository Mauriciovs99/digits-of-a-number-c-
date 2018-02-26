//This program shows the number of digits of the given integer number
#include <stdio.h>

main (){
	int number; //that same
	int digits = 0; //that same, star
	printf ("Insert an integer\n");
	scanf ("%d", &number);
	
	if(number<0){// if number is negative, make it positive
		number=-number;
	}
	
	if(number==0){ //if the number is 0 it has 1 digit
		printf ("1 digit");
		return 0;//end program
	}
	for (;number>=1;number /=10){ //Divide by 10 the number until it reaches 0
		digits=digits+1; //Everytime I divide, the number has one more digit
	}	
	//print number
	printf ("%d digit(s)", digits);
}
