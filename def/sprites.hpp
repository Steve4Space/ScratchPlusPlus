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
	/*
 	** idk how we implement costumes, this is what I was thinking:
	** std::vector<std::string> costumes;
 	** We could also use an std::map to map a costume name to costume data.
	*/
}