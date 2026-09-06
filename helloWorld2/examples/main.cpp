#include <iostream>
#include <string>
#include "../server/server.hpp"

using namespace std;

int main(int argc, char **argv)
{
    try
    {
        Server server(8080);

        server.get("/hw", new ShowPage("static/helloWorld.html"));

        server.run();
    }

    catch (Server::Exception e)
    {
        cerr << e.getMessage() << endl;
    }
}