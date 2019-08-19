/**
 * @file printk.c
 *
 * @brief printf() implementation for KERNEL using UART
 *
 * @date   submission_date
 * @author your_name <email>
 */

#include <kstdint.h>
#include <kstdarg.h>

#include <uart.h>


/**
 * allows for numbers with 64 digits/letters
 */
/* #define MAXBUF (sizeof(uint64_t)) */

/**
 * static array of digits for use in printnum(s)
 */
/* static char digits[] = "0123456789abcdef"; */


/**
 * @brief prints a number
 *
 * @param base 8, 10, 16
 * @param num the number to print
 */
/* static void printnumk(uint8_t base, uint64_t num) { */
/*   /\* TODO: implement *\/ */
/* } */


int printk(const char *fmt, ...) {
 
  /* TODO: implement */

  return 0;
}
