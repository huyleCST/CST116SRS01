// Part0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert>

int main()
{
	std::size_t bool1 { sizeof(bool) };					//	* bool
	std::size_t signedchar { sizeof(signed char) };		//	* signed char
	std::size_t unsignedchar{ sizeof(unsigned char) };	//	* unsigned char
	std::size_t char1 { sizeof(char) };					//	* char
	std::size_t unsignedshort { sizeof(unsigned short) };//	* unsigned short
	std::size_t short1 { sizeof(short) };				//	* short
	std::size_t signed1 { sizeof(signed) };				//	* signed
	std::size_t unsigned1 { sizeof(unsigned) };			//	* unsigned
	std::size_t int1{ sizeof(int) };//	* int
	std::size_t stdsizet { sizeof(std::size_t) };//	* std::size_t
	std::size_t  signedlong{ sizeof(signed long) };//	* signed long
	std::size_t unsignedlong{ sizeof(unsigned long) };//	* unsigned long
	std::size_t long1{ sizeof(long) };//	* long
	std::size_t float1 { sizeof(float) };//	* float
	std::size_t double1 { sizeof(double) };//	* double
	std::size_t longdouble { sizeof(long double) };//	* long double

	assert(sizeof(char) == 1);
	assert(sizeof(float) == 4);
	assert(sizeof(double) == 8);
	assert(sizeof(bool) == 1);
	assert(sizeof(short) == 2);
	assert(sizeof(long) == 4);
	assert(sizeof(long double) == 8);
    return 0;
}

