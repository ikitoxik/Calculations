#include <math.h>
#include "Statistics.h"
float average(int first_number, int second_number, int third_number, int fourth_number)
{
	return (first_number + second_number + third_number + fourth_number) / 4.0;
}
float average(int first_number, int second_number, int third_number)
{
	return (first_number + second_number + third_number) / 3.0;
}
float average(int first_number, int second_number)
{
	return (first_number + second_number) / 2.0;
}
float average(int first_number)
{
	return first_number;
}
float standard_deviation(int first_number, int second_number, int third_number, int fourth_number) 
{
	float ratio = average(first_number, second_number, third_number, fourth_number);
	return sqrt((pow((first_number - ratio), 2) + pow((second_number - ratio), 2) + pow((third_number - ratio), 2) + pow((fourth_number - ratio), 2)) / 4);
}
float standard_deviation(int first_number, int second_number, int third_number)
{
	float ratio = average(first_number, second_number, third_number);
	return sqrt((pow((first_number - ratio), 2) + pow((second_number - ratio), 2) + pow((third_number - ratio), 2)) / 3);
}
float standard_deviation(int first_number, int second_number)
{
	float ratio = average(first_number, second_number);
	return sqrt((pow((first_number - ratio), 2) + pow((second_number - ratio), 2)) / 2);
}
float standard_deviation(int first_number)
{
	return 0;
}
