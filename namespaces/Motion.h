#include <iostream>
#include <cmath>

namespace move {
  //code only for moving sprites, not rotating
  int move(int x, int y, int dir, int steps) {
    int x_pos = (steps + sin(dir));
    int y_pos = (steps + cos(dir));
  };
}

namespace rotate {
  //code only for rotating.
}