#ifndef Brick_H
#define Brick_H

/**
 * Data of a Brick object in Descartes coordinate system
 */
typedef struct Brick
{
	double w;
	double h;
	double l;
} Brick;

/**
 * Set the data of the Brick
 */
void set_Brick_data(Brick* Brick, double w, double h, double l);

/**
 * Calculate the area of the Brick.
 */
double calc_Brick_volume(const Brick* Brick);

double calc_Brick_surface(const Brick* Brick);
#endif // Brick_H