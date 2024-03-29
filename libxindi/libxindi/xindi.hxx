#pragma once

#include <iosfwd>
#include <string>

#include <libxindi/export.hxx>

namespace xindi
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBXINDI_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
