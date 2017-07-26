//Matthew Gall
//prints the largest integer that is both a palindrome 
//and has two factors of string length n
//Note: somewhat inefficient. Would have been better to start iteration from max product.
//
#include <stdio.h>
#include <math.h>

palindrome(void)
{
	double n = 5;
	int i, j, temp, product, reverse_num = 0, remainder, best = 0;
	printf("starting...\n");
	
	double start_i = pow(10, (n - 1));
	double end_i = pow(10, n);

	int end_i2 = end_i;
	//iterate through every combination
	for (i = start_i; i<end_i2; i++){
		for (j = i; j<end_i2; j++){
			product = i*j;
			if (check(product) == 1){
				if (product > best){
					best = i*j;
				}
			}
		}
	}
	printf("%i\n", best);
}

//checks to see if number is a palindrome
int check(int num){
	int reverse_num = 0, remainder, temp;
//	printf("Enter an integer: ");
	//scanf_s("%d", &num);
	int out = 0;
	temp = num;
	while (temp != 0)
	{
		remainder = temp % 10;
		reverse_num = reverse_num * 10 + remainder;
		temp /= 10;
	}
	if (reverse_num == num)
		//printf("%d is a palindrome number", num);
		out = 1;
		return out;
}

int main()
{
	palindrome();

	//printf("%i", i);
	


	while (1);
	return 0;
}