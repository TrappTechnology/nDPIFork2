#include "ndpi_includes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*LoggingFunction)(FILE*, const char*, ...);
bool IsValidFlowForLogging(LoggingFunction logFunc, FILE* serializationLogFile, struct ndpi_flow_info* flow);
void FreeSettingsConfigurationData();

#ifdef __cplusplus
}
#endif