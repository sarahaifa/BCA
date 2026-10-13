#include <stdio.h>

int roll[5], marks[5][5], total[5], result[5];
char name[5][30];
float average[5], percentage[5];

int input()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &roll[i]);

        printf("Enter name: ");
        scanf("%s", name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    return 0;
}

int calculateTotal()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        total[i] = 0;

        for (j = 0; j < 5; j++)
        {
            total[i] = total[i] + marks[i][j];
        }
    }

    return 0;
}

int calculateAverage()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        average[i] = total[i] / 5.0;
    }

    return 0;
}

int calculatePercentage()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        percentage[i] = (total[i] / 500.0) * 100;
    }

    return 0;
}

int checkResult()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        result[i] = 1;

        for (j = 0; j < 5; j++)
        {
            if (marks[i][j] < 35)
            {
                result[i] = 0;
            }
        }
    }

    return 0;
}

int display()
{
    int i, j;

    printf("\nSTUDENT RESULT SHEET\n");

    printf("Roll\tName\tS1\tS2\tS3\tS4\tS5\tTotal\tAverage\tPercentage\tResult\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t%s\t", roll[i], name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
        }

        printf("%d\t%.2f\t%.2f\t",
               total[i], average[i], percentage[i]);

        if (result[i] == 1)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }
    }

    return 0;
}

int main()
{
    input();
    calculateTotal();
    calculateAverage();
    calculatePercentage();
    checkResult();
    display();

    return 0;
}