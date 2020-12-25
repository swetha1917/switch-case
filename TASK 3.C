#include<stdio.h>
main()
{
	// 1. Diplay the menu
	printf("Pick your order : \n1.Pizza\n2.Burger\n3.Pasta\n4.French Fries\n5.Sandwich");
	// 2. Read the choice
	int choice=0;
	scanf("%d",&choice);
	// 3. Display based on their choice
	switch(choice)
	{
	
	case 1:
		printf("Food item - Pizza.\n");
		 printf(" Price - Rs239.\n");
		break;
		
		case 2:
			printf("Food item - Burger.\n");
			printf("Price - Rs129\n");
		    break;
			case 3:
				printf("Food item - Pasta.\n");
				 printf("Price - Rs179\n");
				break;
				case 4:
					printf("Food item - French Fries.\n"); 
					printf("Price - Rs99\n");
					break;
					case 5:
						printf("Food item - Sandwich.\n");
						printf("Price - Rs149\n");
		                break;
						default:
							printf("Invalid Choice");
}
return 0;
};
