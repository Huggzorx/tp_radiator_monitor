/**
  * @file    config_device.h
  * @version 0.2.0
  * @brief   Configuration file
  */

/** Define to prevent recursive inclusion
 */
#pragma once

#include "mbed.h"

/*User defined unique id of their application */
#define UID "MyEnvApp"

/**CLOCK SYNC IF TRUE IS GOING TO TRY TO SET THE TIME*/
#define CLOCK_SYNCH true
#if (CLOCK_SYNCH)
    #define CLOCK_SYNCH_TIME 42180 //1-86400 time in seconds (HH*3600)+(MM*60)
#endif
/**DEFINE SECONDS FOR DEACTIVATING THE INTERRUPT FROM GOING OFF */
#define INTERRUPT_ON true
#define INTERRUPT_DELAY 10

/**The device will restart after 5 error status. */
#define STATUS_ERROR_TOLERANCE 5

enum OtherFilenames
{
    FILENAME_START,
    //pirCount_n,
  
};

/* Ex.
    union pirCount
    {
        struct 
        {
            uint32_t Triggers;
            time_t time;

        } parameters;

        char data[sizeof(pirCount::parameters)];

    };


*/
