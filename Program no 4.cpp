#include<iostream>
#include<conio.h>
#include<cctype>
#include<iomanip>
using namespace std;
class TollBooth{
private:
    unsigned int totalCars;
    double totalCash;
public:
    TollBooth(){
        totalCars=0;
        totalCash=0.0;
    }  
    void payingCar(){
        totalCars++;
        totalCash += 0.50;
    }
    void nopayCar(){
        totalCars++;
    }
    void display() const{
        cout<<"\n-----------------------------"<<endl;
        cout<<"       TOLLBOOTH TOTALS      "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Total Cars: " << totalCars<<endl;
        cout<<fixed << setprecision(2);
        cout<<"Total Cash Collected: $"<<totalCash<<endl;
        cout<<"-----------------------------"<<endl;
    }
};
int main(){
    TollBooth booth;
    char key;
    cout<<"============================="<<endl;
    cout<<"       TOLLBOOTH SYSTEM      "<<endl;
    cout<<"============================="<<endl;
    cout<<"Press P for Paying Car"<<endl;
    cout<<"Press N for Non-Paying Car"<<endl;
    cout<<"Press ESC to Exit"<<endl;
    cout<<"============================="<<endl;
    while(true){
        key = _getch();
        key=toupper(key);
        if(key=='P'){
            booth.payingCar();
            cout<<"Paying car recorded"<<endl;
        }
        else if(key=='N'){
            booth.nopayCar();
            cout<<"Non-paying car recorded"<<endl;
        }
        else if(key==27){
            booth.display();
            break;
        }
    }
    return 0;
}
#include<iostream>
#include<conio.h>
#include<cctype>
#include<iomanip>
using namespace std;
class TollBooth{
private:
    unsigned int totalCars;
    double totalCash;
public:
    TollBooth(){
        totalCars=0;
        totalCash=0.0;
    }  
    void payingCar(){
        totalCars++;
        totalCash += 0.50;
    }
    void nopayCar(){
        totalCars++;
    }
    void display() const{
        cout<<"\n-----------------------------"<<endl;
        cout<<"       TOLLBOOTH TOTALS      "<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Total Cars: " << totalCars<<endl;
        cout<<fixed << setprecision(2);
        cout<<"Total Cash Collected: $"<<totalCash<<endl;
        cout<<"-----------------------------"<<endl;
    }
};
int main(){
    TollBooth booth;
    char key;
    cout<<"============================="<<endl;
    cout<<"       TOLLBOOTH SYSTEM      "<<endl;
    cout<<"============================="<<endl;
    cout<<"Press P for Paying Car"<<endl;
    cout<<"Press N for Non-Paying Car"<<endl;
    cout<<"Press ESC to Exit"<<endl;
    cout<<"============================="<<endl;
    while(true){
        key = _getch();
        key=toupper(key);
        if(key=='P'){
            booth.payingCar();
            cout<<"Paying car recorded"<<endl;
        }
        else if(key=='N'){
            booth.nopayCar();
            cout<<"Non-paying car recorded"<<endl;
        }
        else if(key==27){
            booth.display();
            break;
        }
    }
    return 0;
}
