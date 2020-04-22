/**
 * @file    ThingPilot.h
 * @version 0.1.0
 * @brief   NodeFlow defines six pure virtual functions that the user must override
 *          in order to incorporate user-application/hardware-specific tasks. This override
 *          is done by defining a class that is derived from NodeFlow and overriding the 
 *          functions within this class
 */

/** Includes
 */
#include "node_flow.h"

class ThingPilot: public NodeFlow 
{
    public:

        /** Used to handle one-time setup of a peripheral, such as configuring
         *  an accelerometer interrupt
         */
        void setup();

};