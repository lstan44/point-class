#include <iostream>
#include "point.cc"
#include "point.h"

int main(){

	Point p1(1.9, 0.0);
	//p1.initialize(1.0, 1.9);
	std::cout<<"\n("<<p1.get_x()<< ", " <<p1.get_y()<<")\n";

	p1.shift(1.0, 1.0);
	std::cout<<"("<<p1.get_x()<<", "<<p1.get_y()<<")\n";

	p1.reset_x(30);
	std::cout<<"(" << p1.get_x()<<", " <<p1.get_y() <<")\n";
	p1.reset_y(40);
	std::cout<<"(" << p1.get_x()<<", " <<p1.get_y() <<")\n";

	p1.set_x_to_y();
	std::cout<<"(" << p1.get_x()<<", " <<p1.get_y() <<")\n";
	p1.set_y_to_x();
	std::cout<<"(" << p1.get_x()<<", " <<p1.get_y() <<")\n";
	return 0;
}
