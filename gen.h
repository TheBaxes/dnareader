#include <string>
#include <vector>

class Gen {
 public:
  Gen();
  void leergenes(std::string str);
 private:
  int numgenes;
  std::vector<std::string> genes;
};
