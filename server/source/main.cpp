#include <crow.h>
#include "database/ORM.h"
#include <crow/middlewares/cors.h>

int main()
{
  auto storage = initStorage("happy.db");
  storage.sync_schema();

  crow::App<crow::CORSHandler> app;

  // Configure CORS middleware
  auto &cors = app.get_middleware<crow::CORSHandler>();
  cors.global().headers("Content-Type")
      .methods("GET"_method, "POST"_method, "PUT"_method, "DELETE"_method)
      .origin("*");

  // Health check endpoint
  CROW_ROUTE(app, "/health")
  ([]() {
    crow::json::wvalue response;
    response["status"] = "Healthy";
    response["service"] = "Happy GR4";
    return response;
  });

  app.port(4000).multithreaded().run();
}
