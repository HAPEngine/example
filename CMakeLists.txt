CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
PROJECT (hap_example)

FILE(GLOB HAP_EXAMPLE_SOURCES src/*.c)
ADD_LIBRARY(hap_example SHARED ${HAP_EXAMPLE_SOURCES})


# Don't directly link libraries to modules, or you'll break symbol lookups in
# executabes. Instead, we promote listings of necessary libraries to the
# executable itself and link to it directly.
SET(HAP_MODULE_LIBRARIES ${HAP_MODULE_LIBRARIES}

  # Libraries would go here.

PARENT_SCOPE)
