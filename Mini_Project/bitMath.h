
/*
 * bitMath.h
 *
 * Created: 4/13/2024 3:14:33 PM
 *  Author: vip
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define REGISTER_SIZE 8
#define SET_BIT(reg,bit)    reg|=(1<<bit)
#define CLR_BIT(reg,bit)    reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)    reg^=(1<<bit)
#define READ_BIT(reg,bit)    ((reg&(1<<bit))>>bit)
#define IS_BIT_SET(reg,bit)  (reg&(1<<bit))>>bit
#define IS_BIT_CLR(reg,bit)  !((reg&(1<<bit))>>bit)
#define ROR(reg,num)         reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))
#define ROL(reg,num)         reg=(reg>>(REGISTER_SIZE-num))|(reg<<(num))
#define SET_REG(REG) (REG = 255)
#define CLR_REG(REG) (REG = 0)
#define TOG_REG(REG) (REG ^= 255)


#endif /* BITMATH_H_ */