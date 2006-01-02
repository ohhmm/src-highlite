//
// C++ Implementation: %{MODULE}
//
// Description:
//
//
// Author: %{AUTHOR} <%{EMAIL}>, (C) %{YEAR}
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "statelangelem.h"

#include "statestartlangelem.h"

using namespace std;

StateLangElem::StateLangElem(const string &n, StateStartLangElem *start, LangElems *elems, bool st) :
    LangElem(n), statestartlangelem(start), langelems(elems), state(st)
{
}

StateLangElem::~StateLangElem()
{
  if (statestartlangelem)
    delete statestartlangelem;

  if (langelems)
    delete langelems;
}

const std::string
StateLangElem::toString() const
{
  string res = statestartlangelem->toString();
  if (langelems)
    res += "\n" + langelems->toString();
  return res;
}

