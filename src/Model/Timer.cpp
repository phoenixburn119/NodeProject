/*
 * Timer.cpp
 *
 *  Created on: Feb 16, 2016
 *      Author: akin8529
 */

#include "Timer.h"
#include <iostream>
#include <iomanip> //Make output look nicer!
using namespade std;

Timer::Timer()
{
	executionTimer = 0;
}

Timer::~Timer()
{

}

void Timer::displayTimerInformation()
{
	cout << fixed;
	cout << setprecision(8);

	cout << executionTime << " μs (microseconds) for the code " << endl;
	cout << "Which is " << float(executionTime)/CLOCKS_PER_SEC<< " seconds" << endl;μ
}

void Timer::startTimer()
{
	executionTimer = clock();
}

void Timer::stopTimer()
{
	execionTimer = clock() - executionTimer;
}

void Timer::restTimer()
{
	executionTimer = 0;
}

long Timer::getExecutionTimeInMicroseconds()
{
	return executionTime;
}

