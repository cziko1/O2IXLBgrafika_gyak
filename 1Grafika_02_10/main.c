#include "brick.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Brick brick;
	double volume;
	double surface;

	set_brick_data(&brick, 5, 10, 8);
	volume = calc_brick_volume(&brick);
	surface = calc_brick_surface(&brick);


	printf("brick volume: %lf\n", volume);

	printf("brick surface: %lf\n", surface);

	return 0;
}