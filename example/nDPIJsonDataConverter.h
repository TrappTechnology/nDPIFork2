#ifdef __cplusplus
extern "C" {
#endif

void ConvertnDPIDataFormat(char* jsonStr, char** converted_json_str, size_t* createAlert, int flowRiskIndex);
void DeletenDPIRisk(char* jsonStr, char** converted_json_str);

#ifdef __cplusplus
}
#endif