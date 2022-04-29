/*
	==================================================
	Wish List Forecaster
	==================================================
	Name   : Nozhin Azarpanah
	Date   : September 16, 2021

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define MIN_ITEMS 1
#define MAX_ITEMS 10

int main()
{
	const double MIN_INCOME = 500;
	const double MAX_INCOME = 400000;
	const double MIN_COST = 100.00;
	const int MIN_PRIOR = 1;
	const int MAX_PRIOR = 3;

	double income;
	double sum = 0;
	int num_items, valid, i, selection, filter;

	double cost[MAX_ITEMS];
	int priority[MAX_ITEMS];
	char finance[MAX_ITEMS];

	printf("+--------------------------+\n+   Wish List Forecaster   |\n+--------------------------+");

	do
	{
		printf("\n\nEnter your monthly NET income: $");
		scanf("%lf", &income);

		if (income < MIN_INCOME)
		{
			printf("ERROR: You must have a consistent monthly income of at least $500.00");
		}

		if (income > MAX_INCOME)
		{
			printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00");
		}

	} while (income < MIN_INCOME || income> MAX_INCOME);

	do
	{
		printf("\nHow many wish list items do you want to forecast?: ");
		scanf("%d", &num_items);

		if (num_items < MIN_ITEMS || num_items > MAX_ITEMS)
		{
			printf("ERROR: List is restricted to between 1 and 10 items.\n");
		}

	} while (num_items < MIN_ITEMS || num_items > MAX_ITEMS);

	for (i = 0; i < num_items; i++)
	{
		printf("\nItem-%d Details:\n", i + 1);
		do
		{
			printf("   Item cost: $");
			scanf("%lf", &cost[i]);

			if (cost[i] < MIN_COST)
			{
				printf("      ERROR: Cost must be at least $100.00\n");
			}

		} while (cost[i] < MIN_COST);

		sum += cost[i];

		do
		{
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);

			if (priority[i] < MIN_PRIOR || priority[i] > MAX_PRIOR)
			{
				printf("      ERROR: Value must be between 1 and 3\n");
			}

		} while (priority[i] < MIN_PRIOR || priority[i] > MAX_PRIOR);

		do
		{
			printf("   Does this item have financing options? [y/n]: ");
			scanf("%*c%c", &finance[i]);

			if ((finance[i] != 'y' && finance[i] != 'n'))
			{
				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}

		} while (finance[i] != 'y' && finance[i] != 'n');
	}

	printf("\nItem Priority Financed        Cost\n");
	printf("---- -------- -------- -----------\n");

	for (i = 0; i < num_items; i++)
	{
		printf("%3d%7d%9c%15.2lf\n", i + 1, priority[i], finance[i], cost[i]);
	}

	printf("---- -------- -------- -----------\n");
	printf("%23c%11.2lf\n\n", '$', sum);

	int lengthfinance = sizeof(finance) / sizeof(finance[0]);
	double month = sum / income;
	int roundedmonth = sum / income;

	if (month - roundedmonth > 0)
	{
		roundedmonth = (sum / income) + 1;
	}

	int year = roundedmonth / 12;
	int remainingmonth = roundedmonth % 12;
	int posn;
	double sum1 = 0;
	double sum2 = 0;
	double sum3 = 0;
	posn = -1;

	for (i = 0; i <= num_items; i++)
	{
		if (priority[i] == 1)
		{
			posn = i;
			sum1 += cost[posn];
		}
		else if (priority[i] == 2)
		{
			posn = i;
			sum2 += cost[posn];
		}
		else if (priority[i] == 3)
		{
			posn = i;
			sum3 += cost[posn];
		}
	}

	double p1month = sum1 / income;
	int p1roundedmonth = sum1 / income;

	if (p1month - p1roundedmonth > 0)
	{
		p1roundedmonth = (sum1 / income) + 1;
	}

	int p1year = p1roundedmonth / 12;
	int p1remainingmonth = p1roundedmonth % 12;
	double p2month = sum2 / income;
	int p2roundedmonth = sum2 / income;

	if (p2month - p2roundedmonth > 0)
	{
		p2roundedmonth = (sum2 / income) + 1;
	}

	int p2year = p2roundedmonth / 12;
	int p2remainingmonth = p2roundedmonth % 12;
	double p3month = sum3 / income;
	int p3roundedmonth = sum3 / income;

	if (p3month - p3roundedmonth > 0)
	{
		p3roundedmonth = (sum3 / income) + 1;
	}

	int p3year = p3roundedmonth / 12;
	int p3remainingmonth = p3roundedmonth % 12;

	do
	{
		valid = 1;
		printf("How do you want to forecast your wish list?\n 1. All items (no filter)\n 2. By priority\n 0. Quit/Exit\nSelection: ");
		scanf("%d", &selection);

		if (selection != 0 && selection != 1 && selection != 2)
		{
			printf("\nERROR: Invalid menu selection.\n\n");
			valid = 0;
		}

		if (selection == 1)
		{
			printf("\n====================================================\n");
			printf("Filter:   All items\nAmount:   $%1.2lf", sum);
			printf("\nForecast: %d years, %d months\n", year, remainingmonth);
			for (i = 0; i < lengthfinance; i++)
			{
				if ((finance[i] == 'y'))
				{
					printf("NOTE: Financing options are available on some items.\n");
					printf("      You can likely reduce the estimated months.\n");
					printf("====================================================\n\n");
					break;
				}
				else
				{
					if (i == (lengthfinance - 1))
					{
						printf("====================================================\n\n");
					}
				}
			}
			valid = 0;
		}
		if (selection == 2)
		{
			do
			{
				valid = 1;
				printf("\nWhat priority do you want to filter by? [1-3]: ");
				scanf("%d", &filter);

				if (filter != 1 && filter != 2 && filter != 3)
				{
					printf("ERROR: Invalid menu selection.");
					valid = 0;
				}
			} while (valid == 0);

			if (filter == 1)
			{
				printf("\n====================================================\nFilter:   by priority (%d)", filter);
				printf("\nAmount:   $%1.2lf", sum1);
				printf("\nForecast: %d years, %d months\n", p1year, p1remainingmonth);

				for (i = 0; i < lengthfinance; i++)
				{
					if ((finance[i] == 'y') && (priority[i] == 1))
					{
						printf("NOTE: Financing options are available on some items.\n");
						printf("      You can likely reduce the estimated months.\n");
						printf("====================================================\n\n");
						break;
					}
					else
					{
						if (i == (lengthfinance - 1))
						{
							printf("====================================================\n\n");
						}
					}
				}
			}
			else if (filter == 2)
			{
				printf("\n====================================================\nFilter:   by priority (%d)", filter);
				printf("\nAmount:   $%1.2lf\nForecast: %d years, %d months\n", sum2, p2year, p2remainingmonth);

				for (i = 0; i < lengthfinance; i++)
				{
					if ((finance[i] == 'y') && (priority[i] == 2))
					{
						printf("NOTE: Financing options are available on some items.\n");
						printf("      You can likely reduce the estimated months.\n");
						printf("====================================================\n\n");
						break;
					}
					else
					{
						if (i == (lengthfinance - 1))
						{
							printf("====================================================\n\n");
						}
					}
				}
			}
			else if (filter == 3)
			{
				printf("\n====================================================\nFilter:   by priority (%d)", filter);
				printf("\nAmount:   $%1.2lf\nForecast: %d years, %d months\n", sum3, p3year, p3remainingmonth);

				for (i = 0; i < lengthfinance; i++)
				{
					if ((finance[i] == 'y') && (priority[i] == 3))
					{
						printf("NOTE: Financing options are available on some items.\n");
						printf("      You can likely reduce the estimated months.\n");
						printf("====================================================\n\n");
						break;
					}
					else
					{
						if (i == (lengthfinance - 1))
						{
							printf("====================================================\n\n");
						}
					}
				}
			}
			valid = 0;
		}
	} while (valid == 0);

	if (selection == 0)
	{
		printf("\nBest of luck in all your future endeavours!\n");
	}

	return 0;
}