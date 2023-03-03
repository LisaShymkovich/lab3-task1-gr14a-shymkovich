//
//  Created by Елизавета Шимкович on 2.03.23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interface.h"


int Compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int seed = 0;
int*  Random_Class_Height(const int ARRAY_SIZE)
{
    int* my_array = (int*) malloc(ARRAY_SIZE * sizeof(int));
    if (seed == 0)
    {
        seed = time(NULL);
        srand(seed);
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        my_array[i] = Randomizer(150, 200);
    }
    return my_array;
}


int Randomizer (int min, int max)
{
    return rand()%(max-min+1) + min;
}

void Proccess(int* array1, int* array2, const int ARRAY_SIZE)
{
    printf("Heigths of first class:\n");
    for(int i = 0 ; i < ARRAY_SIZE; i++)
        {
            printf("%d. ", i+1);
            printf("%d sm\n", array1[i]);
        }
    
    printf("\n");
    printf("Heigths of first class:\n");
    for(int i = 0 ; i < ARRAY_SIZE; i++)
    {
        printf("%d. ", i+1);
        printf("%d sm\n", array2[i]);
    }
    
    printf("\n");
    
    
    if (Compare(&array1[ARRAY_SIZE-3], &array2[ARRAY_SIZE-3])>0)
    {
        printf("The person in first class is taller ");
    }
    
    if (Compare(&array1[ARRAY_SIZE-3], &array2[ARRAY_SIZE-3])<0)
    {
        printf("The person in second class is taller ");
    }
    
    if (Compare(&array1[ARRAY_SIZE-3], &array2[ARRAY_SIZE-3])==0)
    {
        printf("The person in first class and in second are the same height");
    }
}

