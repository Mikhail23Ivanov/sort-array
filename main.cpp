#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#include "main.h"

main()
{
    srand(time(NULL));
    int sizea;
    std::cin >> sizea;
    int a[sizea];
    createa(sizea, a);
    show(a, sizea);
    sort2for(a, sizea);
    show(a, sizea);
}

void createa(int sizea, int a[]){
    for(int i = 0; i < sizea; i++){
        
        a[i] = rand() % 100;
    }
}

void sort2for(int a[], int sizea)
{
    for (int i = 0; i < sizea - 1; i++)
    {

        for (int j = i + 1; j < sizea; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}



void show(int a[], int sizea)
{
    for (int i = 0; i < sizea; i++)
    {
        std::cout << a[i] << "\t";
    }
    std::cout << std::endl;
}

void swap(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}