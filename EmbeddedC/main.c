#include <avr/io.h>
#include "ACTIVITY1.h"
#include "ACTIVITY2.h"
#include "ACTIVITY3.h"
#include "ACTIVITY4.h"


int main(void)
{

    defining_ports();
    InitADC();
    pwmperipherals();
    InitUSART(103);
    uint16_t temp;
    char temp_out;
    while(1){

        if (SEATED_N_HEATERON){
                /**
                 * @brief SEATED AND SWITCHED ON THE HEATER
                 *
                 */
                LED_ON;
                temp = ReadADC(0);
                temp_out = output(temp);
                Writechar(temp_out);

        }

        else{
            /**
             * @brief NOT SEATED
             *
             */
            LED_OFF;
        }
    }


    return 0;
}
