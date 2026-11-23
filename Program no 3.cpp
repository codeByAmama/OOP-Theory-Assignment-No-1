#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
class Angle{
private:
    int degrees;
    float minutes;
    char direction;
public:
    Angle(){
        degrees=0;
        minutes=0;
        direction='N';
    }
    Angle(int d, float m, char dir){
        degrees=d;
        minutes=m;
        direction=toupper(dir);
        if(degrees<0 || degrees>180){
            degrees=0;
        }
        if(minutes<0 || minutes>=60){
            minutes=0;
        }
        if(direction!='N' && direction!='S' &&direction!='E' && direction!='W'){
            direction='N';
        }
    }
    void input(){
        cout<<"Enter degrees: ";
        cin>>degrees;
        cout<<"Enter minutes: ";
        cin>>minutes;
        cout<<"Enter direction (N|S|E|W): ";
        cin>>direction;
        direction=toupper(direction);
        if(degrees<0 || degrees>180){ 
            cout<<"Invalid degrees! Setting degrees to 0."<<endl;
            degrees=0;
        }
        if(minutes<0 || minutes>=60){
            cout<<"Invalid minutes! Setting minutes to 0."<<endl;
            minutes=0;
        }
        if(direction!='N' && direction!='S' &&
           direction!='E' && direction!='W'){
            cout<<"Invalid direction! Setting direction to N."<<endl;
            direction='N';
        }
    }
    void display() const{
        cout<<degrees<<" "<<fixed<<setprecision(1)<<minutes<<" "<<direction<<endl;
    }
};
int main(){
    Angle latitude;
    Angle longitude(149,34.8,'W');
    cout<<"Enter Latitude"<<endl;
    latitude.input();
    cout<<"\nLatitude: ";
    latitude.display();
    cout<<"Longitude: ";
    longitude.display();
    return 0;
}
#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;
class Angle{
private:
    int degrees;
    float minutes;
    char direction;
public:
    Angle(){
        degrees=0;
        minutes=0;
        direction='N';
    }
    Angle(int d, float m, char dir){
        degrees=d;
        minutes=m;
        direction=toupper(dir);
        if(degrees<0 || degrees>180){
            degrees=0;
        }
        if(minutes<0 || minutes>=60){
            minutes=0;
        }
        if(direction!='N' && direction!='S' &&direction!='E' && direction!='W'){
            direction='N';
        }
    }
    void input(){
        cout<<"Enter degrees: ";
        cin>>degrees;
        cout<<"Enter minutes: ";
        cin>>minutes;
        cout<<"Enter direction (N|S|E|W): ";
        cin>>direction;
        direction=toupper(direction);
        if(degrees<0 || degrees>180){ 
            cout<<"Invalid degrees! Setting degrees to 0."<<endl;
            degrees=0;
        }
        if(minutes<0 || minutes>=60){
            cout<<"Invalid minutes! Setting minutes to 0."<<endl;
            minutes=0;
        }
        if(direction!='N' && direction!='S' &&
           direction!='E' && direction!='W'){
            cout<<"Invalid direction! Setting direction to N."<<endl;
            direction='N';
        }
    }
    void display() const{
        cout<<degrees<<" "<<fixed<<setprecision(1)<<minutes<<" "<<direction<<endl;
    }
};
int main(){
    Angle latitude;
    Angle longitude(149,34.8,'W');
    cout<<"Enter Latitude"<<endl;
    latitude.input();
    cout<<"\nLatitude: ";
    latitude.display();
    cout<<"Longitude: ";
    longitude.display();
    return 0;
}
