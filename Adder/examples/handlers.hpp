#ifndef HANDLERS_HPP_INCLUDE
#define HANDLERS_HPP_INCLUDE

#include <map>
#include <string>

#include "../server/server.hpp"

class Adder : public RequestHandler
{
public:
    Response *callback(Request *);
};

#endif
