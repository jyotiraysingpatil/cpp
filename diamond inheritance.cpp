#include<iostream>
using namespace std;
class A{
public:	A(){
		cout<<"A'S Constructor is called ";
	}
};
class B:virtual public A{
	public:B(){
		cout<<"B'S Constructor is called ";
	}
};
class C:virtual public A{
	public:C(){
		cout<<"C'S Constructor is called ";
	}
};
class D:virtual public B,public C{
	public:D(){
		cout<<"D'S Constructor is called ";
	}
};
int main(){
	D obj;
}
