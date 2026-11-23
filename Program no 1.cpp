#include<iostream>
using namespace std;
class Circle{
public:
float radius, x, y;
Circle(){
    x=0;
    y=0;
    radius=0;
}
Circle(float xValue, float yValue, float r){
    x=xValue;
    y= yValue;
    if(r<0){
        radius=0;
    }
    else{
        radius=r;
    }
}
void setValues(float xValue, float yValue, float r){
    x=xValue;
    y= yValue;
    if(r<0){
        radius=0;
    }
    else{
        radius=r;
    }
}
float area() const{
    return 3.14159*radius*radius;
}
float circumference() const{
    return 2*3.14159*radius;
}
void print() const{
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    cout<<"Radius: "<<radius<<endl;
}
};
int main(){
   Circle c1;
   Circle c2(5,10,7);
   c1.setValues(2,3,4);
   c1.print();
   cout<<"\nArea = "<<c1.area()<<endl;
   cout<<"Circumferece = "<<c1.circumference()<<endl;
   cout<<endl;
   c2.print();
   return 0;
}
