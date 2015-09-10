#ifndef point_cpp
#define point_cpp
#include <iostream>
class point
{
private:
        int flag;
        float x;
        float y;
        point *next;
        point *head ;
        point *current;
 public:
         point()
        {
          head = NULL;
          current = NULL;
        }
        void addpoint(int fl , float xc , float yc)
        {
          point* node = new point;
          node->next = NULL;
          node->flag = fl;
          node->x = xc;
          node->y = yc;
          if(head !=NULL)
          {
            current = head;
            while(current->next != NULL)
            {
              current = current->next;
            }
            current->next = node;
            }
            else
            {
              head = node;
            }
}

// void printlist()
// {
//   current = head;
//   while (current != NULL)
//   {
//   std::cout << "for point  " << current->flag << std::endl;
//   std::cout << "x value    " <<current->x << std::endl;
//   std::cout << "y value    " <<current->y << std::endl;
//   current = current->next;
//
//   }
// }

int sizeoflist()
{
  int size = 0;
  current = head;

    while(current != NULL)
    {
      size++;
      if(current->next ==NULL)
      {return size;}
      current = current->next;
    }
    return size;
  }

  point* searchpoint(int val )
  {
    current = head;
    while(current != NULL)
    {
      if (current->flag == val)
      {
        return current;
      }
      current = current->next;
    }
    }

 float getxcor()
 {
      return x;
 }
 float getycor()
 {
      return y;
 }


};
#endif
