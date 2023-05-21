#include <string>
#include <vector>

/*
** This defines the class 'Sprite'.
** During compilation, Sprites will be declared as objects, like so:
** Sprite Sprite1();
**
** Costume names should be added with
*/

class Sprite {
public:
  std::vector<std::string> costumeNames;
  // TODO: Add a function that adds costumes into the sprite
private:
  int x = 0, y = 0, direction = 90, size = 100;
  bool hidden;
  std::string name;
}