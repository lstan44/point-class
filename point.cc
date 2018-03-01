#include "point.h"
	double Point::get_x()const{
		return x;
	}

	double Point::get_y()const{
		return y;
	}

	/*void Point::initialize(double init_x, double init_y){
		double x = init_x;
		double y = init_y;
	}
	*/
	Point::Point(double init_x, double init_y){
		x = init_x;
		y = init_y;
	}

	void Point::shift(double dx, double dy){
		x+=dx;
		y+=dy;
	}

	void Point::reset_x(double value){
		x = value;
	}

	void Point::reset_y(double value){
		y = value;
	}
	void Point::set_x_to_y(){
		x = y;
	}
	void Point::set_y_to_x(){
		y = x;
	}
