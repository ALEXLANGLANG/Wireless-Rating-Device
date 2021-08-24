
#ifndef		__CONFIG_H
#define		__CONFIG_H


/*********************************************************/

//#define MAIN_Fosc		22118400L	//定义主时钟
//#define MAIN_Fosc		12000000L	//定义主时钟
#define MAIN_Fosc		11059200L	//定义主时钟
//#define MAIN_Fosc		 5529600L	//定义主时钟
//#define MAIN_Fosc		24000000L	//定义主时钟

    /* exact-width signed integer types */
typedef   signed          char int8_t;
typedef   signed short     int int16_t;
typedef   signed           int int32_t;
typedef   signed       long int int64_t;
    /* exact-width unsigned integer types */
typedef unsigned          char uint8_t;
typedef unsigned short     int uint16_t;
typedef unsigned           int uint32_t;
typedef unsigned       long int uint64_t;
/*********************************************************/

#include	"STC15Fxxxx.H"


/**************************************************************************/

#define Main_Fosc_KHZ	(MAIN_Fosc / 1000)

/***********************************************************/

#endif
