/***************************************************

By Eng : Khaled Fathy Esmail

  Date : 3/12/2022

 OOP with C++ Exercise

*****************************************************/

#include "Point.h"
#include "cmath"

float Point::GetDistance(Point p1,Point p2)
{

 float result;

 result = sqrt((pow((p2.X - p1.X),2))+(pow((p2.Y-p1.Y),2)));


return result;
}

 Point::Point(float x , float y):X(x),Y(y)
 {

 }
 Point::Point()
 {

 }
Point::~Point()
{

}
