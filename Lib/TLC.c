/*****************************************************/
/* 				Main logic module                          */
/*****************************************************/
#include "TLC.h"

tlc_struct_t mainStruct;

void TLC_Start(){
	if (!Flash_Load_Params()){
		TLC_Load_Default_Values();
	}
	COM_Init();
}