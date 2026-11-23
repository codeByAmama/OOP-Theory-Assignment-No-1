#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time(){
			hours=0;
			minutes=0;
			seconds=0;
		}
		Time(int h, int m, int s){
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display() const{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		void addTime(const Time& t1, const Time& t2, Time& result) const{
			result.seconds=t1.seconds+t2.seconds;
			result.minutes=t1.minutes+t2.minutes;
			result.hours=t1.hours+t2.hours;
			if(result.seconds>=60){
				result.seconds-=60;
				result.minutes++;
			}
			if(result.minutes>=60){
				result.minutes-=60;
				result.hours++;
			}
		}
};
int main(){
	Time t1(2,40,30);
	Time t2(3,30,40);
	Time t3;
	t3.addTime(t1,t2,t3);
	cout<<"Result: ";
	t3.display();
	return 0;
}
#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		Time(){
			hours=0;
			minutes=0;
			seconds=0;
		}
		Time(int h, int m, int s){
			hours=h;
			minutes=m;
			seconds=s;
		}
		void display() const{
			cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}
		void addTime(const Time& t1, const Time& t2, Time& result) const{
			result.seconds=t1.seconds+t2.seconds;
			result.minutes=t1.minutes+t2.minutes;
			result.hours=t1.hours+t2.hours;
			if(result.seconds>=60){
				result.seconds-=60;
				result.minutes++;
			}
			if(result.minutes>=60){
				result.minutes-=60;
				result.hours++;
			}
		}
};
int main(){
	Time t1(2,40,30);
	Time t2(3,30,40);
	Time t3;
	t3.addTime(t1,t2,t3);
	cout<<"Result: ";
	t3.display();
	return 0;
}
