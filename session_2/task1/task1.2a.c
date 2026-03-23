//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
	 
     while (1) {
        printf("Enter Password: ");
        scanf("%s", password);
     
        if (strcmp(password, "secure123") ==0) {
            printf("Correct\n");
            break;
        } else {
            printf("Acceess denied\n");
        }
        
     }
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here
	
    return 0;
}