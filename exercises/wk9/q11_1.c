//This program includes a struct called car that is used to store information about a given cat
//The program should ask the user for information about their car and initialize a car structure with the given information
//The program should also print the information using a pointer to the initialized struct
//The information printed using the struct and the pointer should be the same

//tracy miles
//03/22/21

#include <stdio.h>
#include <string.h>
// make name a string

struct car{
	char* car;
	int modelYear;
	float speed;
};

int main(void){
	char n[20];
	int a;
	float w;

	struct car c;
        struct car *cPtr = &c; //added struct and & in front of c


	printf("What is your favorite car's name: ");
	scanf(" %s",n); //changed to %s instead of %d
	c.car = n;

	printf("When was it launched : " );
	scanf(" %d", &a); //changed %c to a %d
	c.modelYear = a;

	printf("How much speed does it give : ");
	scanf(" %f", &w);
	c.speed = w;
        

	printf("Car's name is %s, and should be the same as %s.\n", c.car, cPtr->car);
	printf("Car's model year is %d, and should be the same as %d.\n", c.modelYear, cPtr->modelYear);
	printf("Car's speed is %f, and should be the same as %f.\n", c.speed, cPtr->speed);
}
