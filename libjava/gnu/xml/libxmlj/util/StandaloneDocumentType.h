
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_libxmlj_util_StandaloneDocumentType__
#define __gnu_xml_libxmlj_util_StandaloneDocumentType__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace libxmlj
      {
        namespace util
        {
            class StandaloneDocumentType;
        }
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Document;
          class NamedNodeMap;
          class Node;
          class NodeList;
          class UserDataHandler;
      }
    }
  }
}

class gnu::xml::libxmlj::util::StandaloneDocumentType : public ::java::lang::Object
{

public:
  StandaloneDocumentType(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * getName();
  ::org::w3c::dom::NamedNodeMap * getEntities();
  ::org::w3c::dom::NamedNodeMap * getNotations();
  ::java::lang::String * getPublicId();
  ::java::lang::String * getSystemId();
  ::java::lang::String * getInternalSubset();
  ::java::lang::String * getNodeName();
  ::java::lang::String * getNodeValue();
  void setNodeValue(::java::lang::String *);
  jshort getNodeType();
  ::org::w3c::dom::Node * getParentNode();
  ::org::w3c::dom::NodeList * getChildNodes();
  ::org::w3c::dom::Node * getFirstChild();
  ::org::w3c::dom::Node * getLastChild();
  ::org::w3c::dom::Node * getPreviousSibling();
  ::org::w3c::dom::Node * getNextSibling();
  ::org::w3c::dom::NamedNodeMap * getAttributes();
  ::org::w3c::dom::Document * getOwnerDocument();
  ::org::w3c::dom::Node * insertBefore(::org::w3c::dom::Node *, ::org::w3c::dom::Node *);
  ::org::w3c::dom::Node * replaceChild(::org::w3c::dom::Node *, ::org::w3c::dom::Node *);
  ::org::w3c::dom::Node * removeChild(::org::w3c::dom::Node *);
  ::org::w3c::dom::Node * appendChild(::org::w3c::dom::Node *);
  jboolean hasChildNodes();
  ::org::w3c::dom::Node * cloneNode(jboolean);
  void normalize();
  jboolean isSupported(::java::lang::String *, ::java::lang::String *);
  ::java::lang::String * getNamespaceURI();
  ::java::lang::String * getPrefix();
  void setPrefix(::java::lang::String *);
  ::java::lang::String * getLocalName();
  jboolean hasAttributes();
  ::java::lang::String * getBaseURI();
  jshort compareDocumentPosition(::org::w3c::dom::Node *);
  ::java::lang::String * getTextContent();
  void setTextContent(::java::lang::String *);
  jboolean isSameNode(::org::w3c::dom::Node *);
  ::java::lang::String * lookupPrefix(::java::lang::String *);
  jboolean isDefaultNamespace(::java::lang::String *);
  ::java::lang::String * lookupNamespaceURI(::java::lang::String *);
  jboolean isEqualNode(::org::w3c::dom::Node *);
  ::java::lang::Object * getFeature(::java::lang::String *, ::java::lang::String *);
  ::java::lang::Object * setUserData(::java::lang::String *, ::java::lang::Object *, ::org::w3c::dom::UserDataHandler *);
  ::java::lang::Object * getUserData(::java::lang::String *);
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) name;
  ::java::lang::String * publicId;
  ::java::lang::String * systemId;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_libxmlj_util_StandaloneDocumentType__
