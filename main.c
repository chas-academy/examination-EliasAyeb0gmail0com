//Write your code in this file
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
    char name[5][11];
    int results[5][13];
    float averages[5];
    float total_average = 0;

    for (int a=0; a < 5; a++)
        {
       
        scanf("%10s", name[a]);
        
        name[a][0] =toupper(name[a][0]);

        for(int b = 0; b < 13;b++)
        {
            scanf("%d", &results[a][b]);

        }
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
    for(int a=1; a<5;a++)
    {
        if(averages[a]>averages[max_index])
        {
            max_index = a;
        }

    }
printf("%s\n", name[max_index]);


for (int a=0; a<5;a++)
{
if(averages[a] < total_average)
{
    printf("%s\n", name[a]);
}


}



    return 0;
}
