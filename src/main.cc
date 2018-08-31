
#include <rfb/rfb.h>
#include <stdlib.h>

#include "cast_screen.h"
#include "flutter_application.h"

int main(int argc, char* argv[]) {
  cast::FlutterApplication application;

  if (!application.IsValid()) {
    CAST_ERROR << "Could not run the Flutter application." << std::endl;
    return EXIT_FAILURE;
  }

  cast::CastScreen screen("Sample Cast", 800, 600);

  if (!screen.IsValid()) {
    CAST_ERROR << "Could not create the cast screen." << std::endl;
    return EXIT_FAILURE;
  }

  screen.Run();

  return EXIT_SUCCESS;
}