#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <stdlib.h> 
#include <chrono>
#include <ctime>

int main()
{
    time_t theTime = time(NULL);
    struct tm* aTime = localtime(&theTime);
    int day = aTime->tm_mday;

    int sum = 0;
    const int S = 4;
    int array[S][S];

    for (int i = 0; i < S; i++)
    {
        for (int j = 0; j < S; j++)
        {
            array[i][j] = i + j;
            std::cout << array[i][j];
        }
        std::cout << "\n";
    }
    
    for (int i = 0; i < S; i++)
    {
        sum = sum + array[day % 4][i];
    }

    std::cout << "\n" << sum;
}