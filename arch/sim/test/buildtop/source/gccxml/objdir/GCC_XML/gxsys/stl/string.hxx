/*============================================================================
  KWSys - Kitware System Library
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/

// This header is extra code for <gxsys/stl/string>.
#if !defined(gxsys_stl_string_including_hxx)
# error "The header <gxsys/stl/string.hxx> may be included only by <gxsys/stl/string>."
#endif

// Provide the istream operator for the stl string if it is not
// provided by the system or another copy of kwsys.  Allow user code
// to block this definition by defining the macro
// gxsys_STL_STRING_NO_ISTREAM
// to avoid conflicts with other libraries.  User code can test for
// this definition by checking the macro
// gxsys_STL_STRING_ISTREAM_DEFINED
#if !gxsys_STL_STRING_HAVE_ISTREAM && !defined(gxsys_STL_STRING_NO_ISTREAM) && !defined(KWSYS_STL_STRING_ISTREAM_DEFINED)
# define KWSYS_STL_STRING_ISTREAM_DEFINED
# define gxsys_STL_STRING_ISTREAM_DEFINED
# include <ctype.h> // isspace
# include <gxsys/ios/iostream>
# if defined(__WATCOMC__)
namespace gxsys
{
struct ios_istream_hack: public kwsys_ios::istream
{ void eatwhite() { this->gxsys_ios::istream::eatwhite(); } };
}
# endif
inline gxsys_ios::istream&
operator>>(gxsys_ios::istream& is,
           gxsys_stl::string& s)
{
  // Keep track of the resulting state.
  int state = gxsys_ios::ios::goodbit;

  // Save the width setting and set it back to zero.
  size_t n = static_cast<size_t>(is.width(0));

  // Clear any old contents of the output string.
  s.erase();

  // Skip leading whitespace.
#if defined(__WATCOMC__)
  static_cast<gxsys::ios_istream_hack&>(is).eatwhite();
#else
  is.eatwhite();
#endif
  gxsys_ios::istream& okay = is;

  if(okay)
    {
    // Select a maximum possible length.
    if(n == 0 || n >= s.max_size())
      {
      n = s.max_size();
      }

    // Read until a space is found or the maximum length is reached.
    bool success = false;
    for(int c = is.peek(); (--n > 0 && c != EOF && !isspace(c)); c = is.peek())
      {
      s += static_cast<char>(c);
      success = true;
      is.ignore();
      }

    // Set flags for resulting state.
    if(is.peek() == EOF) { state |= gxsys_ios::ios::eofbit; }
    if(!success) { state |= gxsys_ios::ios::failbit; }
    }

  // Set the final result state.
  is.clear(state);
  return is;
}
#endif

// Provide the ostream operator for the stl string if it is not
// provided by the system or another copy of kwsys.  Allow user code
// to block this definition by defining the macro
// gxsys_STL_STRING_NO_OSTREAM
// to avoid conflicts with other libraries.  User code can test for
// this definition by checking the macro
// gxsys_STL_STRING_OSTREAM_DEFINED
#if !gxsys_STL_STRING_HAVE_OSTREAM && !defined(gxsys_STL_STRING_NO_OSTREAM) && !defined(KWSYS_STL_STRING_OSTREAM_DEFINED)
# define KWSYS_STL_STRING_OSTREAM_DEFINED
# define gxsys_STL_STRING_OSTREAM_DEFINED
# include <gxsys/ios/iostream>
inline gxsys_ios::ostream&
operator<<(gxsys_ios::ostream& os,
           gxsys_stl::string const& s)
{
  return os << s.c_str();
}
#endif

// Provide the operator!= for the stl string and char* if it is not
// provided by the system or another copy of kwsys.  Allow user code
// to block this definition by defining the macro
// gxsys_STL_STRING_NO_NEQ_CHAR
// to avoid conflicts with other libraries.  User code can test for
// this definition by checking the macro
// gxsys_STL_STRING_NEQ_CHAR_DEFINED
#if !gxsys_STL_STRING_HAVE_NEQ_CHAR && !defined(gxsys_STL_STRING_NO_NEQ_CHAR) && !defined(KWSYS_STL_STRING_NEQ_CHAR_DEFINED)
# define KWSYS_STL_STRING_NEQ_CHAR_DEFINED
# define gxsys_STL_STRING_NEQ_CHAR_DEFINED
inline bool operator!=(gxsys_stl::string const& s, const char* c)
{
  return !(s == c);
}
inline bool operator!=(const char* c, gxsys_stl::string const& s)
{
  return !(s == c);
}
#endif
