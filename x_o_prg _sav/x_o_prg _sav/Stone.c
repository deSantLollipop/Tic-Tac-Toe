#include <stdio.h>
#include <stdlib.h>

int check(char tab[3][3])
{
	int k = 0;
	for (k = 0; k < 3; k++)
	{
		if (((tab[k][0] == tab[k][1]) && (tab[k][0] == tab[k][2]) && (tab[k][0] == 'x')) || ((tab[0][k] == tab[1][k]) && (tab[0][k] == tab[2][k]) && (tab[0][k] == 'x')))
		{
			printf("Congrats to the X, O - lose\n\n");
			system("pause");
			return 0;
		}
		else
		{
			if (((tab[k][0] == tab[k][1]) && (tab[k][0] == tab[k][2]) && (tab[k][0] == 'o')) || ((tab[0][k] == tab[1][k]) && (tab[0][k] == tab[2][k]) && (tab[0][k] == 'o')))
			{
				printf("Congrats to the O, X - lose\n\n");
				system("pause");
				return 0;
			}
		}
	}


	if (((tab[0][0] == tab[1][1]) && (tab[0][0] == tab[2][2]) && (tab[0][0] == 'x')) || ((tab[0][2] == tab[1][1]) && (tab[0][2] == tab[2][0]) && (tab[0][2] == 'x')))
	{
		printf("Congrats to the X, O - lose\n\n");
		system("pause");
		return 0;
	}
	else
	{
		if (((tab[0][0] == tab[1][1]) && (tab[0][0] == tab[2][2]) && (tab[0][0] == 'o')) ||
			((tab[0][2] == tab[1][1]) && (tab[0][2] == tab[2][0]) && (tab[0][2] == 'o')))
		{
			printf("Congrats to the O, X - lose\n\n");
			system("pause");
			return 0;
		}
	}
}


int checkTor(char tab[3][3])
{
	if (((tab[0][0] == tab[1][2]) && (tab[0][0] == tab[2][1]) && (tab[0][0] == 'x')) ||
		((tab[0][1] == tab[1][2]) && (tab[0][1] == tab[2][0]) && (tab[0][1] == 'x')) ||
		((tab[0][1] == tab[1][0]) && (tab[0][1] == tab[2][2]) && (tab[0][1] == 'x')) ||
		((tab[0][2] == tab[1][0]) && (tab[0][2] == tab[2][1]) && (tab[0][2] == 'x')))
	{
		printf("Congrats to the X, O - lose\n\n");
		system("pause");
		return 0;
	}
	else
	{
		if (((tab[0][0] == tab[1][2]) && (tab[0][0] == tab[2][1]) && (tab[0][0] == 'o')) ||
			((tab[0][1] == tab[1][2]) && (tab[0][1] == tab[2][0]) && (tab[0][1] == 'o')) ||
			((tab[0][1] == tab[1][0]) && (tab[0][1] == tab[2][2]) && (tab[0][1] == 'o')) ||
			((tab[0][2] == tab[1][0]) && (tab[0][2] == tab[2][1]) && (tab[0][2] == 'o')))
		{
			printf("Congrats to the O, X - lose\n\n");
			system("pause");
			return 0;
		}
	}
}

int checkKlein(char tab[3][3])
{
	int k = 0;
	for (k = 0; k < 3; k++)
	{
		if (((tab[k][0] == tab[k][1]) && (tab[k][0] == tab[2 - k][2]) && (tab[k][0] == 'x')) || ((tab[0][k] == tab[1][k]) && (tab[0][k] == tab[2][2-k]) && (tab[0][k] == 'x')))
		{
			printf("Congrats to the X, O - lose\n\n");
			system("pause");
			return 0;
		}
		else
		{
			if (((tab[k][0] == tab[k][1]) && (tab[k][0] == tab[2 - k][2]) && (tab[k][0] == 'o')) || ((tab[0][k] == tab[1][k]) && (tab[0][k] == tab[2][2 - k]) && (tab[0][k] == 'o')))
			{
				printf("Congrats to the O, X - lose\n\n");
				system("pause");
				return 0;
			}
		}
	}

	if (((tab[0][2] == tab[1][2]) && (tab[0][0] == tab[2][1]) && (tab[0][0] == 'x')) ||
		((tab[0][1] == tab[1][2]) && (tab[0][1] == tab[2][2]) && (tab[0][1] == 'x')) ||
		((tab[0][1] == tab[1][0]) && (tab[0][1] == tab[2][0]) && (tab[0][1] == 'x')) ||
		((tab[0][0] == tab[1][0]) && (tab[0][2] == tab[2][1]) && (tab[0][2] == 'x')))
	{
		printf("Congrats to the X, O - lose\n\n");
		system("pause");
		return 0;
	}
	else
	{
		if (((tab[0][2] == tab[1][2]) && (tab[0][0] == tab[2][1]) && (tab[0][0] == 'o')) ||
			((tab[0][1] == tab[1][2]) && (tab[0][1] == tab[2][2]) && (tab[0][1] == 'o')) ||
			((tab[0][1] == tab[1][0]) && (tab[0][1] == tab[2][0]) && (tab[0][1] == 'o')) ||
			((tab[0][0] == tab[1][0]) && (tab[0][2] == tab[2][1]) && (tab[0][2] == 'o')))
		{
			printf("Congrats to the O, X - lose\n\n");
			system("pause");
			return 0;
		}
	}
}


int main(int argc, char **argv)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	char tab[3][3] = { { '_','_','_' },{ '_','_','_' },{ '_','_','_' } };



	for (k = 0; k < 3; k++)
		printf("%c | %c | %c \n", tab[k][0], tab[k][1], tab[k][2]);


	for (l = 0;l < 5;l++)
	{

		printf("Input place for X:\n");

		do {
			scanf("%d", &i);
			scanf("%d", &j);
			printf("\n");
			if (tab[i][j] == '_')
				tab[i][j] = 'x';
			else
				printf("Wrong place! Please, input another coordinates->\n");
		} while (tab[i][j] != 'x');

			system("cls");

		for (k = 0; k < 3; k++)
			printf("%c | %c | %c \n", tab[k][0], tab[k][1], tab[k][2]);
			
		check(tab);
		//checkTor(tab);
		checkKlein(tab);
			
			
		printf("Input place for O:\n");	
		
		do {
				scanf("%d", &i);
				scanf("%d", &j);
				printf("\n");
				if (tab[i][j] == '_')
					tab[i][j] = 'o';
				else
					printf("Wrong place! Please, input another coordinates ->\n");
			} while (tab[i][j] != 'o');

				system("cls");

		for (k = 0; k < 3; k++)
			printf("%c | %c | %c \n", tab[k][0], tab[k][1], tab[k][2]);

		check(tab);
		//checkTor(tab);
		checkKlein(tab);

	}
	system("pause");
	return 0;
}

