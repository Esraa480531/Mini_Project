#include "stdTypes.h"
#include "bitMath.h"
#include "DIO.h"
#include "register.h"
u8 Max_Value , Min_Value ;
void DIO_Select_Dir_Pin(u8 Group_Name, u8 Pin_Number, u8 Dir_State)



{
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		if(Pin_Number>=Pin0 && Pin_Number<=Pin7)
		{
			if(Dir_State==Input){
				switch(Group_Name){
					case GroupA: CLR_BIT(DDRA,Pin_Number); break;
					case GroupB: CLR_BIT(DDRB,Pin_Number); break;
					case GroupC: CLR_BIT(DDRC,Pin_Number); break;
					case GroupD: CLR_BIT(DDRD,Pin_Number); break;
				}
			}

		}
		else if(Dir_State==Output)
		{
			switch(Group_Name)
			{
				case GroupA: SET_BIT(DDRA,Pin_Number); break;
				case GroupB: SET_BIT(DDRB,Pin_Number); break;
				case GroupC: SET_BIT(DDRC,Pin_Number); break;
				case GroupD: SET_BIT(DDRD,Pin_Number); break;
			}


		}
	}
}
void DIO_Select_Output_Type_Pin(u8 Group_Name,u8 Pin_Number, u8 Output_State)
{
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		if(Pin_Number>=Pin0 && Pin_Number<=Pin7)
		{
			if(Output_State==Low){
				switch(Group_Name)
				{
					case GroupA: CLR_BIT(PORTA,Pin_Number); break;
					case GroupB: CLR_BIT(PORTB,Pin_Number); break;
					case GroupC: CLR_BIT(PORTC,Pin_Number); break;
					case GroupD: CLR_BIT(PORTD,Pin_Number); break;
				}
			}
		}
		else if(Output_State==High)
		{
			switch(Group_Name)
			{
				case GroupA: SET_BIT(PORTA,Pin_Number); break;
				case GroupB: SET_BIT(PORTB,Pin_Number); break;
				case GroupC: SET_BIT(PORTC,Pin_Number); break;
				case GroupD: SET_BIT(PORTD,Pin_Number); break;
			}
		
	}
}

u8 DIO_Read_Input_Value_Pin(u8 Group_Name,u8 Pin_Number)
{
	u8 res=0;
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		if(Pin_Number>=Pin0 && Pin_Number<=Pin7)
		{
			switch(Group_Name)
			{
				case GroupA: res = READ_BIT(PINA,Pin_Number);break;
				case GroupB: res =READ_BIT(PINB,Pin_Number);break;
				case GroupC: res =READ_BIT(PINC,Pin_Number);break;
				case GroupD: res =READ_BIT(PIND,Pin_Number);break;
			}
		}
	}
	return res;

}


void DIO_Select_Dir_Group(u8 Group_Name,u8 Dir_State)
{
	
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		if(Dir_State<=Max_Value &&Dir_State>=Min_Value)
		{
			switch(Group_Name)
			{
				case GroupA:  DDRA=Dir_State; break;
				case GroupB:  DDRB=Dir_State; break;
				case GroupC:  DDRC=Dir_State; break;
				case GroupD:  DDRD=Dir_State; break;
			}
		}
	}
}
void DIO_Select_Output_Type_Group(u8 Group_Name, u8 Output_State)
{
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		if(Output_State<=Max_Value &&Output_State>=Min_Value)
		{

			switch(Group_Name)
			{
				case GroupA:  PORTA=Output_State; break;
				case GroupB:  PORTB=Output_State; break;
				case GroupC:  PORTC=Output_State; break;
				case GroupD:  PORTD=Output_State; break;
			}
		}
	}


}
u8 DIO_Read_Input_Value_Group(u8 Group_Name)
{
	u8 val=0;
	if(Group_Name>=GroupA && Group_Name<=GroupD)
	{
		switch (Group_Name){

			case GroupA: val=PINA; break;
			case GroupB: val=PINB; break;
			case GroupC: val=PINC; break;
			case GroupD: val=PIND; break;
		}
	}
	return val;
}
}