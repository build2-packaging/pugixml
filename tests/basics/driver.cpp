#include <cassert>
#include <sstream>
#include <stdexcept>

#include <pugixml/version.hpp>
#include <pugixml/pugixml.hpp>

int main ()
{
  using namespace std;
  using namespace pugixml;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
