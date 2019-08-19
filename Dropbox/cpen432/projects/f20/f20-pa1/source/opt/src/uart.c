/**
 * @file   uart.c
 *
 * @brief  lower level hardware interactions for uart on pi
 *
 * @date   submission_date
 * @author your_name
 */

#include <kstdint.h>
#include <uart.h>

/**
 * @brief initializes UART to 115200 baud in 8-bit mode
 */
void uart_init(void) {
  
  /* TODO: implement */
  
}

/**
 * @brief closes UART
 */
void uart_close(void) {
  
  /* TODO: implement */
  
}

/**
 * @brief sends a byte over UART
 *
 * @param byte the byte to send
 */
void uart_put_byte(uint8_t byte) {

  /* TODO: implement */
  
}

/**
 * @brief reads a byte over UART
 *
 * @return the byte received
 */
uint8_t uart_get_byte(void) {
  
  /* TODO: implement */

  return 0;
}
