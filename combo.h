#include <vector>
#include <string>
#include "Dict.h"
#include <deque>


class combo {
private:
  /* data */
  int size;

public:
  deque<Dict> container;
  bool check_empty();
  void mode_change();
  void mode_length();
  void mode_swap();

  combo ();
  virtual ~combo ();
};
