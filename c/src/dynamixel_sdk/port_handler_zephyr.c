#if defined(__ZEPHYR__)

/*

Links:
- https://github.com/Dictor/doggedness-firmware/tree/main
- https://github.com/ys-oh/dynamixel-zephyr/tree/master
- https://github.com/sylvaing19/dynamixel_teensy

*/


#include "port_handler_zephyr.h"

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/uart.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/sys/ring_buffer.h>
#include <zephyr/logging/log.h>

#include <stdbool.h>
#include <string.h>

LOG_MODULE_REGISTER(port_handler);

int portHandlerZephyr(const struct device *dev, const struct gpio_dt_spec *tx_enable)
{
    int ret;

    return -1;
}

uint8_t openPortZephyr(int port_num)
{

    return 0;
}

void closePortZephyr(int port_num)
{
    return;
}

void clearPortZephyr(int port_num)
{
    return;
}

void setPortNameZephyr(int port_num, const char *port_name)
{
    return;
}

char *getPortNameZephyr(int port_num)
{
    return 0;
}

uint8_t setBaudRateZephyr(int port_num, const int baudrate)
{
    return 0;
}

int getBaudRateZephyr(int port_num)
{
    return 0;
}

int getBytesAvailableZephyr(int port_num)
{
    return 0;
}

int readPortZephyr(int port_num, uint8_t *packet, int length)
{
    return 0;
}

int writePortZephyr(int port_num, uint8_t *packet, int length)
{
    return 0;
}

void setPacketTimeoutZephyr(int port_num, uint16_t packet_length)
{
    return;
}

void setPacketTimeoutMSecZephyr(int port_num, double msec)
{
    return;
}

uint8_t isPacketTimeoutZephyr(int port_num)
{
    return 0;
}

#endif // __ZEPHYR__