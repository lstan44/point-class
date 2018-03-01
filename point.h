#ifndef HEADER_H
#define HEADER_H

class Point {
	public:
		//void initialize(double init_x, double init_y);
		Point();
		Point( double init_x, double init_y);
		void shift(double dx, double dy);
		double get_x() const;
		double get_y() const;
		void reset_x(double value);
		void reset_y(double value);
		void set_x_to_y();
		void set_y_to_x();

	private:
		double x;
		double y;
};
#endif //HEADER_H
