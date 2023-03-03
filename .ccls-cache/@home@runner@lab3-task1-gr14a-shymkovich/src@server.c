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
int*  Random_Class_Height(const int Class_Size)
{
    int* class = (int*) malloc(Class_Size * sizeof(int));
    if (seed == 0)
    {
        seed = time(NULL);
        srand(seed);
    }
    for (int i = 0; i < Class_Size; i++)
    {
        class[i] = Randomizer(150, 200);
    }
    return class;
}

int Randomizer (int min, int max)
{
    return rand()%(max-min+1) + min;
}


void Proccess(int* class1, int* class2, const int Class_Size)
{
    printf("Heigths of first class:\n");
    for(int i = 0 ; i < Class_Size; i++)
        {
            printf("%d. ", i+1);
            printf("%d sm\n", class1[i]);
        }
    
    printf("\n");
    printf("Heigths of second class:\n");
    for(int i = 0 ; i < Class_Size; i++)
    {
        printf("%d. ", i+1);
        printf("%d sm\n", class2[i]);
    }
    printf("\n");
    
    
    if (Compare(&class1[Class_Size-3], &class2[Class_Size-3])>0)
    {
        printf("The person in first class is taller \n");
    }
    
    if (Compare(&class1[Class_Size-3], &class2[Class_Size-3])<0)
    {
        printf("The person in second class is taller \n");
    }
    
    if (Compare(&class1[Class_Size-3], &class2[Class_Size-3])==0)
    {
        printf("The person in first class and in second are the same height\n");
    }
}
