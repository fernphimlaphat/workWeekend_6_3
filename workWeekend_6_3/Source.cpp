#include<stdio.h> 
#include<math.h>

void goods()
{
	printf("[1]Cola 60\n[2]Pizza 120\n[3]Bread 50 \n[4]Sandwich 30\n");
	printf("Please select : ");

}

void good2(int price) {
	int price2,num[100],sum = 0,i = 0;
	

	do {

		scanf_s("%d", &price2);

		if (price2 > 0 && price2 <= price) {
			num[i] = price2;

			if (num[i] == 1)
			{
				num[i] = 60;
				printf("%d Baht\n", num[i]);
			}
			else if (num[i] == 2)
			{
				num[i] = 120;
				printf("%d Baht\n", num[i]);

			}
			else if (num[i] == 3)
			{
				num[i] = 50;
				printf("%d Baht\n", num[i]);

			}
			else if (num[i] == 4)
			{
				num[i] = 30;
				printf("%d Baht\n", num[i]);

			}
			sum += num[i];
			i++;
		}

		else
		{
			printf("Try again : ");
		}

		} while (i < price);
		printf("\nAll goods = %d\n", sum);
	


}

int main()
{
	int price , i = 0,price2,num[5],sum = 0;
	printf("How many to buy (Max = 4) : ");
	scanf_s("%d", &price);


		
		
			if (price > 0 && price <= 4)
			{
				goods();
				good2(price);
			}
			else
			{
				do{
				printf("\nNot found\n");
				printf("Again : ");
				scanf_s("%d", &price);
				
				}while (price <= 0 || price > 4);

				goods();
				good2(price);
			}


	

		
	

	

}