#pragma once
#include <iostream>
#include "Vector.hpp"
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <array>
#include <vector>

Vector::Vector() {
	x = DEFAULT_SIZE;
	y = DEFAULT_SIZE;
	z = DEFAULT_SIZE;
}

