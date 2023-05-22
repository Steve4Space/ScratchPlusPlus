class Sprite {
public:
  Sprite(int c_x, int c_y, int c_dir, int c_size, bool c_hidden) {
    x = c_x;
    y = c_y;
    dir = c_dir;
    size = c_size;
    hidden = c_hidden;
  }

	// Motion block prototypes
	void move(int steps);
	void rotate_left(int value);
	void rotate_right(int value)

	void change_y(int value);
	void change_x(int value);

	void goto_xy(int x_value, int y_value);
	void goto_random();
	void goto_mouse();
	void goto_sprite(std::string sprite);

	void glide_xy(int x, int y);
	void glide_random(double sec);
	void glide_mouse();
	void glide_sprite(std::string sprite);
	

private:
  int x, y, dir, size;
  bool hidden;
	/*
 	** idk how we implement costumes, this is what I was thinking:
	** std::vector<std::string> costumes;
 	** We could also use an std::map to map a costume name to costume data.
	*/
}