#include "stdafx.h"
#include "stdio.h"

void main()
{
	float english = 0;
	float french = 0;
	float maths = 0;
	float irish = 0;
	float science = 0;
	float average;


	printf("Enter English mark: ");
	scanf("%f", &english);

	printf("Enter French mark: ");
	scanf("%f", &french);

	printf("Enter Maths mark: ");
	scanf("%f", &maths);

	printf("Enter Irish mark: ");
	scanf("%f", &irish);

	printf("Enter Science mark: ");
	scanf("%f", &science);

	average = (english + irish + maths + french + science)/ 5.0;
	printf("Average Mark = %.2f \n", average);

	printf("Fails: ");
	if (english < 40)
	{
		printf("English ");
	}
	
	if (french < 40)
	{
		printf("French ");
	}

	if (maths < 40)
	{
		printf("Maths ");
	}

	if (irish < 40)
	{
		printf("Irish ");
	}

	if (science < 40)
	{
		printf("Science ");
	}


	printf("\nPasses: ");
	if (english > 40)
	{
		printf("English ");
	}

	if (french > 40)
	{
		printf("French ");
	}

	if (maths > 40)
	{
		printf("Maths ");
	}

	if (irish > 40)
	{
		printf("Irish ");
	}

	if (science > 40)
	{
		printf("Science \n");
	}
}
