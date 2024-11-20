#ifdef __cplusplus
extern "C" {
#endif

void ConvertnDPIDataFormat(char* jsonStr, char** converted_json_str, size_t* createAlert, int flowRiskIndex, unsigned int response_status_code, char* user_agent, char* filename, char* content_type, char* request_content_type);
void DeletenDPIRisk(char* jsonStr, char** converted_json_str);

#ifdef __cplusplus
}
#endif