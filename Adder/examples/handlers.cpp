#include "handlers.hpp"

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Response *Adder::callback(Request *req)
{
    Response *res = new Response;
    res->setHeader("Content-Type","text/html");
    int num1 = stoi(req->getQueryParam("num1"));
    int num2 = stoi(req->getQueryParam("num2"));
    // req->getQueryParam("num1") gets the value of the query parameter called num1.

    ostringstream body;
    body << "<!DOCTYPE html>" << endl
    <<"<html>" << endl
    <<"<body>" << endl

    <<num1 << " + " << num2 << "= " << num1+num2 << endl

    <<"</body>" << endl
    <<"</html>" << endl;

    res->setBody(body.str());
    return res;
}
