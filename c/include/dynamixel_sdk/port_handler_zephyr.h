#ifndef DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_ZEPHYR_PORTHANDLERZEPHYR_C_H_
#define DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_ZEPHYR_PORTHANDLERZEPHYR_C_H_

#include <stdint.h>

int     portHandlerZephyr         (const char *port_name);

uint8_t openPortZephyr            (int port_num);
void    closePortZephyr           (int port_num);
void    clearPortZephyr           (int port_num);

void    setPortNameZephyr         (int port_num, const char *port_name);
char   *getPortNameZephyr         (int port_num);

uint8_t setBaudRateZephyr         (int port_num, const int baudrate);
int     getBaudRateZephyr         (int port_num);

int     getBytesAvailableZephyr   (int port_num);

int     readPortZephyr            (int port_num, uint8_t *packet, int length);
int     writePortZephyr           (int port_num, uint8_t *packet, int length);

void    setPacketTimeoutZephyr    (int port_num, uint16_t packet_length);
void    setPacketTimeoutMSecZephyr(int port_num, double msec);
uint8_t isPacketTimeoutZephyr     (int port_num);

#endif // DYNAMIXEL_SDK_INCLUDE_DYNAMIXEL_SDK_ZEPHYR_PORTHANDLERZEPHYR_C_H_
