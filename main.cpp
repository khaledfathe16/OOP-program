/***************************************************

By Eng : Khaled Fathy Esmail

  Date : 3/12/2022

 OOP with C++ Exercise

*****************************************************/

#include <iostream>
//#include "Point.h"
#include "Point.cpp"
using namespace std;

int main()
{
float distance = 0;
Point p1(5,5);
Point p2(10,10);

distance = Point::GetDistance(p1,p2);

cout<<"The distance between two points  = "<<distance;




return 0;
}
