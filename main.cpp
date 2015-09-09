#include <iostream>
#include "point.cpp"
#include "calculatearea.cpp"
main()
{
  int pointnumber = 0 , token , size;
  float xcor ,ycor , result;
  point listobject;
  calculatearea cal;
  std::cout << "Calculate the Area of any 2D polygon" << std::endl;
  std::cout << std::endl;
  std::cout << "Want to begin enter 1"  << std::endl;
  std::cin >> token;
  while(token ==1)
   {
      std::cout << "Enter the X coordinate" << std::endl;
      std::cin >> xcor;
      std::cout<<std::endl;
      std::cout << "Enter the Y coordinate" << std::endl;
      std::cin >> ycor;
      listobject.addpoint(pointnumber , xcor ,ycor);
      pointnumber++;
      std::cout << "want to continue enter 1"  << std::endl;
      std::cin >> token;
   }
  // listobject.printlist();
result = cal.totalareaofpolygon(listobject);
std::cout << "the Area of polygon with  " <<(pointnumber)<<" sides is  "<<result<< std::endl;

  return 0;
}
