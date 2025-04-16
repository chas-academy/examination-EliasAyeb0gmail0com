//Write your code in this file
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    char name[5][50];
    int results[5][13];
    float averages[5];
    float total_average = 0;

    for (int a=0; a < 5; a++)
        {
        printf("Enter name and 13 test results for student %d:\n", a+1);
        scanf("%50s", name[a]);
        
        name[a][0] =toupper(name[a][0]);

        for(int b = 0; b < 13;b++)
        {
            scanf("%d ", &results[a][b]);

        }
            while (getchar() !='\n');

            int sum = 0;
            for (int b = 0; b<13; b++)
            {
                sum = sum + results[a][b];
            }
            averages[a] = (float)sum/13;

            total_average += averages[a];
        }
    total_average /=5;

    int max_index = 0;
    for(int a=0; a<5;a++)
    {
        if(averages[a]>averages[max_index])
        {
            max_index = a;
        }

    }
printf("\n%s\n", name[max_index]);

printf("\n");
for (int a=0; a<5;a++)
{
if(averages[a] < total_average)
{
    printf("%s\n", name[a]);
}


}



    return 0;
}
