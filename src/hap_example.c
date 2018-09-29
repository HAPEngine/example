/**
 * This is an example module for HAP.
 *
 * It's worth mention that there are some #pragma statements in here, but they
 * are hopefully not necessary in production code since production code will
 * actually use the engine.
 *
 */

#ifndef OS_Windows
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
#endif


#include <hap.h>
#include <stdio.h>
#include <stdlib.h>

#include "hap_example.h"


HAP_MODULE_EXPORT void* create(HAPEngine *engine, HAPConfigurationSection *configuration) {
	(void)engine;      // Mark variable as used to avoid compiler warnings

	return (void*) malloc(sizeof(exampleState));
}


HAP_MODULE_EXPORT void load(HAPEngine *engine, exampleState *state, char *identifier) {
	(void)engine;      // Mark variable as used to avoid compiler warnings
	(void)identifier;  // Mark variable as used to avoid compiler warnings

	(*state).name = identifier;
}


HAP_MODULE_EXPORT HAPTime update(HAPEngine *engine, exampleState *state) {
	(void)engine;      // Mark variable as used to avoid compiler warnings
	(void)state;       // Mark variable as used to avoid compiler warnings

	// Update this module no more often than once every quarter second
	return (HAPTime) 0.25;
}


HAP_MODULE_EXPORT void render(HAPEngine *engine, void *state) {
	// This is a special hook which is called for each rendered frame. It
	// is optional and should NOT be provided for plugins don't render
	// any video.

	(void)engine;      // Mark variable as used to avoid compiler warnings
	(void)state;       // Mark variable as used to avoid compiler warnings
}

HAP_MODULE_EXPORT void unload(HAPEngine *engine, exampleState *state) {
	(void)engine;      // Mark variable as used to avoid compiler warnings
	(void)state;       // Mark variable as used to avoid compiler warnings
}


HAP_MODULE_EXPORT void destroy(HAPEngine *engine, exampleState *state) {
	(void)engine;      // Mark variable as used to avoid compiler warnings
	(void)state;       // Mark variable as used to avoid compiler warnings
}


#ifndef OS_Windows
#pragma GCC diagnostic pop
#endif
