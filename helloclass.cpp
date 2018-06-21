#include "helloclass.h"
HelloClass::HelloClass()
{
	std::cout<<"The class is creating"<<std::endl;
}
void HelloClass::sayHello()
{
	std::cout<<"Hello class"<<std::endl;
}
HelloClass::~HelloClass()
{
	std::cout<<"The class is destroying"<<std::endl;
}
