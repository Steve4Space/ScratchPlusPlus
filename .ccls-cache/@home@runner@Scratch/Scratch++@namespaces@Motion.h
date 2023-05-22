#include <Scratch++/sprites.hpp> // This compiles
#include <cmath>
#include <iostream>
/*
Order:
-Direct movement(IE, move (steps))
-Rotation(IE, turn right (x))
*/

// Should be "Sprite::move(int steps) {}", direction is stored in the sprite
// already
// code only for moving sprites, not rotating
int move(int x, int y, int dir, int steps) {
  int x_pos = (steps + sin(dir)); // finds change in x
  int y_pos = (steps + cos(dir)); // finds change in y
  int final_x = x + x_pos;        // finds where the new x should be
  int final_y = y + y_pos;        // finds new y
};

int chang_X_by(int x, int change) {}

// rotation

int setDir(int curdir, int newdir) {
  // currently special function, should check if final value is not within
  // -180-180 and edit based off that
  int findir = curdir + newdir;
  if (findir < -180) {
    //360 degrees, circle
    findir = abs(findir);/*should work*/
  }
}