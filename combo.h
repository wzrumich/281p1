#include <vector>
#include <string>
#include "Dict.h"
#include <deque>


class combo {
private:
  /* data */

public:
  static std::map<string, bool> word_map;
  deque<Dict> container;
  void mode_change(vector<string>& input, string word);
  void mode_length(vector<string>& input, string word);
  void mode_swap(vector<string>& input, string word);

  combo ();
  virtual ~combo ();
};
