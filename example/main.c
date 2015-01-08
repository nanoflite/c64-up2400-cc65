#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <serial.h>
#define DRIVERNAME  "c64-up2400.ser"

static const struct ser_params serialParams = {
    SER_BAUD_2400,      /* Baudrate */
    SER_BITS_8,         /* Number of data bits */
    SER_STOP_1,         /* Number of stop bits */
    SER_PAR_NONE,       /* Parity setting */
    SER_HS_NONE         /* Type of handshake to use */
};

int main (void)
{
  char c;

  clrscr();
  puts("C64 serial");

  // Load driver
  ser_load_driver(DRIVERNAME);

  // Open port
  ser_open(&serialParams);

  // Enable serial
  ser_ioctl(1, NULL);

  ser_put('X'); 

  ser_get(&c);
 
  return EXIT_SUCCESS;
}
