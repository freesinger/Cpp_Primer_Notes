/* Calculate square of a circle */

#include<iostream>  
#define OK 1  
#define pi 3.14  
using namespace std;  
  
class Circle  
{  
  public:  
     Circle(int radius) { Radius=radius; }  
     Circle(Circle &C);  
     ~Circle() {}  
     int GetR() { return Radius; }  
     int GetArea() const;  
    
  private:  
     int Radius;  
};  
  
Circle::Circle(Circle &C)  
{  
     C.Radius=Radius;  
}  
  
int Circle::GetArea() const  
{  
     return pi*Radius*Radius;  
}  
  
int main(void)  
{  
     int r;  
     Circle mycircle(2);  
     cout<<"Square of default circle is ："<<mycircle.GetArea()<<endl;  
       
     cout<<"Enter the radius = ";  
     cin>>r;  
     Circle youcircle(r);  
     cout<<"Square of circle with radius of "<<r<<" is："<<youcircle.GetArea()<<endl;  
   
     return OK;  
}  