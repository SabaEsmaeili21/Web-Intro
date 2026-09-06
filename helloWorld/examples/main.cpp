#include <iostream>
#include <string>

#include "../server/server.hpp"
#include "handlers.hpp"

using namespace std;

int main(int argc, char **argv)
{
    try
    {
        // Create an HTTP server listening on port 8080.
        Server server(8080);

        // Register a GET route.
        //
        // If somebody sends:
        //
        // GET /hello
        //
        // the server will use HelloWorld to process it.
        // void get(string path, RequestHandler* handler);
        server.get(
            "/hello",
            // This is the URL path.
            // So if your server is running on port 8080, then:
            // http : // localhost:8080/hello
            // matches this path
            new HelloWorld());

        server.get("/hw", new ShowPage("static/helloWorld.html"));
        // “When someone sends a GET request to /hw,
        // return the HTML file static/helloWorld.html.”

        // Start the server.
        // Normally this function keeps running,
        // waiting for incoming HTTP requests.
        server.run();
    }

    // If the server encounters an error,
    // catch the exception here.
    catch (Server::Exception e)
    {
        // Print the error message to standard error.
        cerr << e.getMessage() << endl;
    }
}