// Timer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <chrono>
/*...*/


int main()
{

	//get the start time
	auto start = std::chrono::steady_clock::now();

	//run some code
	for (int i = 0; i < 1e6; i++) {
	
		std::cout << "hi";
	
	}

	//get the end time
	auto end = std::chrono::steady_clock::now();


	//find the difference
	double elasped_time = double(std::chrono::duration_cast<std::chrono::nanoseconds> (end - start).count());


	//output
	std::cout << "Elasped Time (s): " << elasped_time / 1e9 << std::end;






    return 0;
}

