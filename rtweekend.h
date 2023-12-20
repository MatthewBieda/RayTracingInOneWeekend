#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions 

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
};

inline double random_double() {
    // Returns a random real to [0,1]
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max]
    return min + (max-min)*random_double();
}

inline int random_int(int min, int max) {
    // Returns a random integer in [min,max]
    return static_cast<int>(random_double(min, max+1));
}

// Common Headers

#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif