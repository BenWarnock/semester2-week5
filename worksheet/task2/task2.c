/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Ben Warnock
 * ID: 201852300
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
	long decimal=0;
	char hex[9];
	int valid = 1;
	
	printf("Enter a hexadecimal:");
	fgets(hex, sizeof(hex), stdin);
	hex[strcspn(hex, "\n")] = '\0';

	for (int i = 0; i< strlen(hex); i++) {
		hex[i] = toupper(hex[i]);
		if (!((hex[i] >= '0' && hex[i] <='9') || (hex[i] >= 'A' && hex[i] <= 'F'))) {
			valid = 0;
			printf("Error: Invalid Hexadecimal\n");
			break;
		}
	}
	
	for (int i=0; i<strlen(hex); i++) {
		int value;
	
		if (hex[i] >= '0' && hex[i] <= '9') {
			value = hex[i] - '0';
		} else if(hex[i] >= 'A' && hex[i] <= 'F') {
			value = hex[i] - 'A' + 10;
		}
	
	decimal = decimal * 16 + value;
	}

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}