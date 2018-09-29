#include <hap.h>


typedef struct {
	char *name;
} exampleState;


HAP_MODULE_EXPORT extern void* create(HAPEngine *engine, HAPConfigurationSection *configuration);
HAP_MODULE_EXPORT extern void load(HAPEngine *engine, exampleState *state, char *identifier);
HAP_MODULE_EXPORT extern HAPTime update(HAPEngine *engine, exampleState *state);
HAP_MODULE_EXPORT void render(HAPEngine *engine, void *state);
HAP_MODULE_EXPORT extern void unload(HAPEngine *engine, exampleState *state);
HAP_MODULE_EXPORT extern void destroy(HAPEngine *engine, exampleState *state);
