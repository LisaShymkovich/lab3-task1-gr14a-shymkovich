//
//  Created by Елизавета Шимкович on 1.03.23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interface.h"

int main(int argc, const char * argv[])
{
    const int Class_Size=23;
    int* First_Class = Random_Class_Height(Class_Size);
    qsort(First_Class, Class_Size,sizeof(int), Compare);
    int* Second_Class =  Random_Class_Height(Class_Size);
    qsort(Second_Class, Class_Size, sizeof(int), Compare);
    Proccess(First_Class, Second_Class, Class_Size);
  return 0;
}

