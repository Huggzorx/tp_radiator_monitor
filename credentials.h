/**
 ******************************************************************************
 * @file    credentials.h
 * @version 0.1.0
 * @brief   Holds the credentials for TTN configuration for OTAA and ABP
 ******************************************************************************
 */
 
/* Don't build if target != below 
 */
#if BOARD == EARHART_V1_0_0 || BOARD == DEVELOPMENT_BOARD_V1_1_0 /* #endif at EoF */

/*!
 * When set to 1 the application uses the Over-the-Air activation procedure LORAWAN_CONNECTION_OTAA
 * When set to 0 the application uses the Personalization activation procedure ABP
 */

#define OVER_THE_AIR_ACTIVATION false

//MSB
#if(OVER_THE_AIR_ACTIVATION)
static uint8_t DevEUI[8]= { 0x00, 0xA5, 0x21, 0xF8, 0x89, 0x89, 0x1D, 0x14 };
static uint8_t AppEUI[8]= { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x02, 0x1A, 0xF3 };
static uint8_t AppKey[16]= { 0x5F, 0x8C, 0x0D, 0x6E, 0x22, 0x03, 0x6F, 0xC1, 0x25, 0x0C, 0x08, 0x0A, 0x0F, 0x6A, 0x45, 0xD1 };
#endif /* #if(OVER_THE_AIR_ACTIVATION) */

#if(!OVER_THE_AIR_ACTIVATION)

static uint32_t DevAddr= 0x26011BB6;
static uint8_t NetSKey[16]={ 0x3A, 0x34, 0x11, 0x76, 0x8A, 0x39, 0x2D, 0xDA, 0x16, 0xBA, 0x41, 0xA2, 0x65, 0x37, 0xC8, 0xF7 };
static uint8_t AppSKey[16]={ 0xBF, 0xF5, 0x9D, 0x54, 0xBF, 0x19, 0x44, 0x16, 0xCC, 0xBD, 0x4E, 0x17, 0x67, 0x6A, 0x9C, 0x5E };

#endif /*#if(OVER_THE_AIR_ACTIVATION) */

#endif /* #if BOARD == EARHART_V1_0_0 || BOARD == DEVELOPMENT_BOARD_V1_1_0  */