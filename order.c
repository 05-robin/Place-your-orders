#include<stdio.h>
int main()
{
	printf("Enter your order:\n1. Pizza,Rs 239\n2. Burger,Rs 129\n3. Pasta,Rs 179\n4. French fries,Rs 99\n5. Sandwich,Rs 149\n");
	int order=0;
	scanf("%d",&order);
	switch(order)
	{
		case 1:
			printf("food item-Pizza\nprice-Rs 239");
			break;
		case 2:
			printf("Food item-Burger\nprice-Rs 129");
			break;
		case 3:
			printf("Food item-Pasta\nprice-Rs 179");
			break;
		case 4:
			printf("Food item-French fries\nprice-Rs 99");
			break;
		case 5:
			printf("Food item-Sandwich\nprice-Rs 149");
			break;
		default:
		    printf("INVALID ORDER\nPlease check again"); 	
	}
	return 0;
}
