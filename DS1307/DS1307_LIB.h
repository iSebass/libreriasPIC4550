#ifndef DS1307LIB_H
#define	DS1307LIB_H


#include "I2C_LIB.h"
#include "config.h"

#define RTC_DIR (0b1101000)<<1

enum{
    DIR_SS,
    DIR_MM,
    DIR_HH,
    DIR_DAY,
    DIR_DATE,
    DIR_MONTH,
    DIR_YEAR,
    DIR_REG
};

enum{
    DOMINGO = 1,
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO 
};

void setHH(char hh);
void setMM(char mm);
void setSS(char ss);
void setDAY(char day);
void setDATE(char date);
void setMONTH(char month);
void setYEAR(char year);

char getHH(void);
char getMM(void);
char getSS(void);
char getDAY(void);
char getDATE(void);
char getMONTH(void);
char getYEAR(void);




#endif	/* DS1307LIB_H */

