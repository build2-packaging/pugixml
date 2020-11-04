#pragma once

#include <iosfwd>
#include <string>

#include <pugixml/export.hpp>

namespace pugixml
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  PUGIXML_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
