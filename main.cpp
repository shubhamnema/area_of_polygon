#include <iostream>
#include "point.cpp"
#include "calculatearea.cpp"
main()
{
  int pointnumber = 0 , token;
  float xcor ,ycor , result;
  point listobject;
  calculatearea areaobj;

  std::cout << "Calculate the Area of any 2D polygon" << std::endl;
  std::cout << std::endl;
  std::cout << "Want to begin enter 1"  << std::endl;
  std::cin >> token;
  while(token ==1)
   {
      std::cout << "************************************************************" << std::endl;
      std::cout << "Enter the X coordinate" << std::endl;
      std::cin >> xcor;
      std::cout<<std::endl;
      std::cout << "Enter the Y coordinate" << std::endl;
      std::cin >> ycor;
      listobject.addpoint(pointnumber , xcor ,ycor);
      pointnumber++;
      std::cout<< std::endl;
      std::cout << "************************************************************" << std::endl;
      std::cout << "want to continue enter 1"  << std::endl;
      std::cin >> token;
      std::cout<< std::endl;
   }
  // listobject.printlist();
result = areaobj.totalareaofpolygon(listobject);
std::cout << "the Area of polygon with  " <<pointnumber<<" sides is  "<<result<< std::endl;

  return 0;
}
