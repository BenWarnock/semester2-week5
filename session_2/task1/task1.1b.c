//Week 5, Session 2

# include <stdio.h>

int main(void){
/* Task 1.1b
 * Convert the following Python list comprehension to for loop in C. 
 * A list equivalent in an array is given.
 * 
 * Python code:
 * list_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 * squares = [x*x for x in list_numbers if x%2==0]
 * for i in squares:
 *    print(i)
 */
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int squares[10];    // max possible size
	int count = 0;   // actual number of results
	
	//todo: convert the list comprehension
	for (int i=0; i<10; i++){
		if(numbers[i] % 2 ==0){
			squares[count] = numbers[i] * numbers[i];
			count ++;
		}
	}
	//print results
	for(int i=0; i < count; i++){
	    printf("%d ", squares[i]);
	}
 
    return 0;
}