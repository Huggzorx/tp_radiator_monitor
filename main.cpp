/**
*******************************************************************************************
*                               __|__       
*                        --@--@--(_)--@--@--                 
* @file    main.cpp
* @version 0.2.0
* @author  The User 
* @brief   This sketch demonstrates how to measure and send data with the ThingPilot module
*         
*          A) TARGET: TP_WRIGHT_V1_0_0 for NB-IOT || TP_EARHART_V1_0_0 for LoRaWan
*          B) For Earhart: It uses ABP to send data to the ttn network. 
*             All keys have to be specified in the credentials.h in big endian byte order
* 
*******************************************************************************************
**/

/** Includes 
 */
#include "ThingPilot.h"
ThingPilot myapp;

/* Ex.
 * float send_scheduler[NUMBER]={HH.MM,HH.MM};
 */


void ThingPilot::setup()
{
    //will only run once
    //create files, set up intervals schedules etc
    
}

//This cannot be removed
int main()
{ 
    myapp.start();
}





