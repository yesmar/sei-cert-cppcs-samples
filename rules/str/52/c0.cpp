// STR52-CPP: Compliant Solution (std::string::insert())
#include <string>
 
void f(const std::string &input) {
  std::string email;

  // Copy input into email converting ";" to " "
  std::string::iterator loc = email.begin();
  for (auto i = input.begin(), e = input.end(); i != e; ++i, ++loc) {
    loc = email.insert(loc, *i != ';' ? *i : ' ');
  }
}
