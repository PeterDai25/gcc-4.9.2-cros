
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_ipp_IppResponse$ResponseReader__
#define __gnu_javax_print_ipp_IppResponse$ResponseReader__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
        namespace ipp
        {
            class IppResponse;
            class IppResponse$ResponseReader;
        }
      }
    }
  }
  namespace javax
  {
    namespace print
    {
      namespace attribute
      {
          class Attribute;
        namespace standard
        {
            class JobStateReasons;
            class PrinterStateReasons;
        }
      }
    }
  }
}

class gnu::javax::print::ipp::IppResponse$ResponseReader : public ::java::lang::Object
{

public: // actually package-private
  IppResponse$ResponseReader(::gnu::javax::print::ipp::IppResponse *);
public:
  virtual void parseResponse(::java::io::InputStream *);
private:
  jbyte parseAttributes(::java::util::Map *, ::java::io::DataInputStream *);
  void addAttribute(::java::util::Map *, ::javax::print::attribute::Attribute *);
  ::javax::print::attribute::standard::PrinterStateReasons * parsePrinterStateReasons(JArray< jbyte > *, ::javax::print::attribute::Attribute *);
  ::javax::print::attribute::standard::JobStateReasons * parseJobStateReasons(JArray< jbyte > *, ::javax::print::attribute::Attribute *);
  ::java::util::Date * parseDate(JArray< jbyte > *);
  static const jshort VERSION = 257;
public: // actually package-private
  ::gnu::javax::print::ipp::IppResponse * __attribute__((aligned(__alignof__( ::java::lang::Object)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_ipp_IppResponse$ResponseReader__