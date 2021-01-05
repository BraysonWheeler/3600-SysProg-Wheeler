#include <stdio.h>
#include "major1.h"
int main()
{
	int menuNumber=0, input, input2;
	while(menuNumber != 5)
	{
		input=-1;
		input2=-1;
		printf("Enter the menu option for the operation to perform:\n(1) Count Leading Zeroes\n(2) Endian Swap\n(3) Rotate-right\n(4) Parity\n(5) EXIT\n");
		scanf("%i",&menuNumber);
		
		switch(menuNumber)
		{
			case 1:
				while(!(input >= 1 && input <= 4294967295))
				{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
					scanf("%i", &input);
				}
				printf("The number of leading zeroes in %d is %d\n",input,countLeadingZeroes(input));
				break;
				
			case 2:
				while(!(input >= 1 && input <= 4294967295))
				{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
					scanf("%i", &input);
				}
				printf("Endian swap of %d gives %d\n",input,endian(input));
				break;
			
			case 3:
				while(!(input >= 1 && input <= 4294967295))
				{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
					scanf("%i", &input);
				}
				while(!(input2 >= 0 && input2 <= 31))
				{
					printf("Enter the number of positions to rotate-right the input (between 0 and 31, inclusively):  ");
					scanf("%i", &input2);
				}
				printf("%d rotated by %d position gives: %u\n",input,input2,rotate(input,input2));
				break;
				
			case 4:
				while(!(input >= 1 && input <= 4294967295))
				{
					printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
					scanf("%i", &input);
				}
				printf("Parity of %d is %d\n",input,parity(input));
				break;
			
			case 5:
				printf("Program terminating. Goodbye...\n");
				break;
				
			default:
				printf("Error: Invalid option. Please try again.\n");
		}
		
	}
}