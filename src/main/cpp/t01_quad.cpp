//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>

using namespace std;

int t01_quad() {
    
    int N,I,S;
    cin >> N;
    S = 1; I=1;
    while (I <= N)
    {

        if (I=S)
        {

          I*=S;

        }
        if (I <= N)
        cout << I << " ";

        S++;
        I++;
    }
return 0;
};
