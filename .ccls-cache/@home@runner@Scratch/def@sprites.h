class Sprite {
public:
  Sprite(int c_x, int c_y, int c_dir, int c_size, bool c_hidden) {
    x = c_x;
    y = c_y;
    dir = c_dir;
    size = c_size;
    hidden = c_hidden;
  }

private:
  int x, y, dir, size;
  bool hidden;
}