//
//  Created by Елизавета Шимкович on 2.03.23.
//

#ifndef interface_h
#define interface_h

//Proccess
//This function prints in console writes in console result of the program
//Arguments:
//    int * array1
//    int * array2
//    const int Class_Size
//Return:
//    The massage,  that displays in console

void Proccess(int* First_Class, int* Second_Class, const int Class_Size);



//Compare
//This function return the
//Arguments:
//    int * First_Class
//    int * Second_Class
//Return:
//    The result of comparison of two elements First_Class[i] and Second_Class[i]:
//        1: first argument > second argument
//        -1: second argument > first argument
//        0: first argument = second argument

int Compare(const void *First_Class, const void *Second_Class);



//Random_Class_Heigth
//This function creates an array of generated in "Randomizer" function numbers
//Arguments:
//    const int Class_Height
//Return:
//    Randomly generated array

int*  Random_Class_Height(const int Class_Size);



//Randomizer
//This function randomly generates a number from [min, max] segment
//Arguments:
//    int min
//    int max
//Return:
//    Randomly generated number

int Randomizer (int min, int max);

#endif /* interface_h */