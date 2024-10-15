#include <iostream>
#include "WebServer.h"

int main()
{
  try
  {
    std::cout << "Test" << '\n';
    io_service service;
    HTTPServer server(service , 8001);
    service.run();
  }
  catch(std::exception& e)
  {
    std::cerr << e.what();
  }
  return 0;
}