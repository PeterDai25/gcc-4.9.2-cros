
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_rmi_server_RMISocketFactory__
#define __java_rmi_server_RMISocketFactory__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace net
    {
        class ServerSocket;
        class Socket;
    }
    namespace rmi
    {
      namespace server
      {
          class RMIFailureHandler;
          class RMISocketFactory;
      }
    }
  }
}

class java::rmi::server::RMISocketFactory : public ::java::lang::Object
{

public:
  RMISocketFactory();
  virtual ::java::net::Socket * createSocket(::java::lang::String *, jint) = 0;
  virtual ::java::net::ServerSocket * createServerSocket(jint) = 0;
  static void setSocketFactory(::java::rmi::server::RMISocketFactory *);
  static ::java::rmi::server::RMISocketFactory * getSocketFactory();
  static ::java::rmi::server::RMISocketFactory * getDefaultSocketFactory();
  static void setFailureHandler(::java::rmi::server::RMIFailureHandler *);
  static ::java::rmi::server::RMIFailureHandler * getFailureHandler();
private:
  static ::java::rmi::server::RMISocketFactory * defaultFactory;
  static ::java::rmi::server::RMISocketFactory * currentFactory;
  static ::java::rmi::server::RMIFailureHandler * currentHandler;
public:
  static ::java::lang::Class class$;
};

#endif // __java_rmi_server_RMISocketFactory__
