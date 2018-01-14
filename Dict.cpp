#include "Dict.h"
#include <vector>
#include <string>


  Dict::Dict(){
    pred = "";
    used = false;
  }

  string Dict::get_pred(){
    return pred;
  }

  void Dict::set_pred(string word){
    pred = word;
  }

  void Dict::set_used(){
    used = true;
  }

  bool Dict::get_used(){
    return used;
  }

  Dict::Dict(){
    pred = "";
    used = false;
  }

  
