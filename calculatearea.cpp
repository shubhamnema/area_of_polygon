#include <iostream>
#include <cmath>
#include "point.cpp"

class calculatearea
{
private:

  float totalarea ;

public:
       calculatearea()
      {
      totalarea = 0;
      }

       float crossproduct(point* a , point* b)
       {

        return ((a->getxcor() * b->getycor()) - (a->getycor() * b->getxcor()));
       }

       float totalareaofpolygon(point listobject)
       {
         int size = listobject.sizeoflist();
             for (int count = 0 ; count<size ; count++)
             {
               totalarea+=crossproduct(listobject.searchpoint(count) , listobject.searchpoint(((count+1)%size)));
             }
              return std::abs(totalarea/2);
        }
 };
