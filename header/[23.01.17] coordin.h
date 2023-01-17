#ifndef COORDIN_H_				//if not defined, 구조체와 함수의 원형이 들어있음
#define COORDIN_H_

struct polar {
	double distance;
	double angle;
};
struct rect {
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif;