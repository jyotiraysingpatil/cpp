#include<iostream>
using namespace std;
class Vehicle{
	public:
		int speed,a,b,c;
		string name, color;
		Vehicle(){
			
		}
		Vehicle(int speed , string name, string color){
			this->speed=speed;
			this->name=name;
			this->color=color;
		}
		void display(){
			cout<<"Information of Vehicle- ";
			cin>>speed>>name>>color;
		}
		
	friend void function(int a,int b);
		
};
void function(int a, int b ){
	int c;
	c=a+b;
	cout<<"c value is-"<<c;
}
int main(){
	Vehicle v;
	Vehicle v1(50,"Pleasure", "Black");
	v.display();
    v.function(1,2);
	return 0;
	
	
	}

