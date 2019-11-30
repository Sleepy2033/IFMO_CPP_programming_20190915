//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t02_shoes() {
    int x,y,n=0;
cin >>x>>y;
vector <int> m(y);
for(int k=0;k<y;k++)
{cin >>m[k];}
sort(m.begin(),m.end());
int z;
for(int k =0;k < y;k++){
    if(m[k] >= x){
            n++;
        z=m[k];
      for(int j=k;j<y;j++)
            if(m[j]-z>=3)
            {n++;z=m[j];}
            break;}}
cout << n;
return 0; 
}
