#include <stdio.h>

int main() {
    int i,j; // Change this value to adjust the size of the pattern

    for (i = 1; i <= 5; i++) 
	{
        for (j = 1; j <= 5; j++) 
		{
            if (j <= 5-i) 
			{
                printf("*");
            } else
			{
                printf("$");
            }
        }
        printf("\n");
    }

    return 0;
}
