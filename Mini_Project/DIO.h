#include "stdTypes.h"
#include "register.h"
#include "bitMath.h"

#ifndef DIO_H_
#define DIO_H_

#include "stdTypes.h"

void DIO_Select_Dir_Pin(u8 Group_Name, u8 Pin_Number, u8 Dir__State);
void DIO_Select_Dir_Group(u8 Group_Name,u8 Dir_State);
void DIO_Select_Output_Type_Pin(u8 Group_Name,u8 Pin_Number, u8 Output_State);
void DIO_Select_Output_Type_Group(u8 Group_Name, u8 Output_State);
u8 DIO_Read_Input_Value_Pin(u8 Group_Name,u8 Pin_Number);
u8 DIO_Read_Input_Value_Group(u8 Group_Name);


#endif