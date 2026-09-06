#ifndef HANDLERS_HPP_INCLUDE
#define HANDLERS_HPP_INCLUDE

#include <map>
#include <string>

#include "../server/server.hpp"

class HelloWorld : public RequestHandler
{
public:
    // This function will be called when a request arrives.
    //
    // Request * means: "pointer to a Request object"
    Response *callback(Request *);
};

#endif // HANDLERS_HPP_INCLUDE
