// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Rectangle header

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Polygon.hpp"

class Rectangle : public Polygon {
public:
  // Constructor
  Rectangle(int height, int width);
  // Trivial Destructor
  ~Rectangle();

// Area method (polymorphic)
#ifdef RELEASE_DEFINE
  float area();
#endif
};

#endif // RECTANGLE_H_
