#include <iostream>
#include <cmath>
#include "point.cpp"

class calculatearea
{
private:
  float indi ;
  float sdf ;

public:
       calculatearea()
      {
      sdf = 0;
      }

       float summ(point* a , point* b)
       {
        float as, bs , ts;
        as = a->getxcor() * b->getycor();
        bs = a->getycor() * b->getxcor();
        ts = as - bs;
        return ts;
       }

       float totalareaofpolygon(point listobject)
       {
         int size = listobject.sizeoff();
             for (int h = 0 ; h<size ; h++)
             {
                int t;
                t = ((h+1)%size);
                indi = summ(listobject.searchfun(h) , listobject.searchfun(t));
                sdf+=indi;
              }
              return std::abs(sdf/2);

        }


};
