
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_ImplementationSource__
#define __gnu_xml_dom_ImplementationSource__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class ImplementationSource;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class DOMImplementation;
          class DOMImplementationList;
      }
    }
  }
}

class gnu::xml::dom::ImplementationSource : public ::java::lang::Object
{

public:
  ImplementationSource();
  virtual ::org::w3c::dom::DOMImplementation * getDOMImplementation(::java::lang::String *);
  virtual ::org::w3c::dom::DOMImplementationList * getDOMImplementationList(::java::lang::String *);
private:
  ::java::util::List * getImplementations(::java::lang::String *);
public: // actually package-private
  virtual ::java::util::List * parseFeatures(::java::lang::String *);
  virtual ::java::lang::String * getFeature(::java::lang::String *, jint, jint);
private:
  static ::java::lang::String * DIGITS;
  static JArray< ::org::w3c::dom::DOMImplementation * > * implementations;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_ImplementationSource__
