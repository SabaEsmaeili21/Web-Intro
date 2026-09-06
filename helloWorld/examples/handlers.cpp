#include "handlers.hpp"

#include <iostream>
#include <string>
using namespace std;

// ---------------------------------------------------------
// Implementation of the callback() function
// ---------------------------------------------------------
Response *HelloWorld::callback(Request *req)
{
    // Create a new HTTP response object.
    Response *res = new Response;

    // Tell the browser that the response contains HTML.
    //
    // HTTP header:
    //
    // Content-Type: text/html
    res->setHeader(
        "Content-Type",
        "text/html");

    // Create a string that will contain our HTML page.
    string body;

    // Build the HTML page piece by piece.
    body += "<!DOCTYPE html>";
    body += "<html>";
    body += "<body>";

    // This is what the user will actually see.
    body += "<h1>Hello World!</h1>";

    body += "</body>";
    body += "</html>";

    // Put our HTML into the HTTP response body.
    res->setBody(body);

    // Return the completed response to the web server.
    return res;
}
