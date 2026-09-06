// http://localhost:8080/add?num1=12&num2=34
#include <iostream>
#include <string>

#include "../server/server.hpp"
#include "handlers.hpp"

using namespace std;

int main(int argc, char **argv)
{
    try
    {
        Server server(8080);

        server.get("/add",new Adder());
        server.get("/addform", new ShowPage("static/addform.html"));
        server.run();
    }

    
    catch (Server::Exception e)
    {
        cerr << e.getMessage() << endl;
    }
}