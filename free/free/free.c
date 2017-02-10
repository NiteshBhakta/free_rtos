/*
 * free.c
 *
 * Created: 2/10/2017 8:13:38 AM
 *  Author: NITESH
 */ 


#define F_CPU 1000000UL
#include <avr/io.h>
#include "Free.h"
#include "Arduino_FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"
#include "portable.h"
#include "portmacro.h"
#include "mpu_wrappers.h"

#include <util/delay.h>
int main(void)
{
	DDRB |=0xff;
	DDRC |=0xff;
	 while(1)
	{
		xTaskCreate(vta1 , "Task_1" , 100 , NULL , 0 , NULL );
		xTaskCreate(vta , "Task_2" , 100 ,NULL , 0 , NULL);
		//vTaskStartSchedular();
		vTaskStartScheduler();
		while(1);
	}
	return 0;
}