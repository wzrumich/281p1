#include <vector>
#include <string>




class Dict {
  private:
    string pred;
    bool used;


  public:
    string get_pred();
    bool get_used();
    void set_pred();
    void set_used();
    Dict ();



    virtual ~Dict ();

};
