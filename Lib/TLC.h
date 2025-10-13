/*****************************************************/
/* 				Main logic module                          */
/*****************************************************/
#include "main.h"

typedef struct {
	uart_com_settings_t comSettings;
	
} tlc_struct_t;

extern tlc_struct_t mainStruct;

void TLC_Start();
void TLC_Load_Default_Values();