#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <utility>

class JSON {
public:
  JSON(std::string json_path) {
    std::fstream json_file;
    json_file.open(json_path);
    if (json_file.fail()) {
      std::cerr << "Couldn't open JSON file!";
    } else {
      std::stringstream json_ss;
      json_ss << json_file.rdbuf();
      json_string = json_ss.str();
    }
  }

  std::string getJsonString() { return json_string; }

  std::string getJsonValue(std::string key) {
    std::stringstream json_ss(json_string);
  }

private:
  std::string json_string;
};