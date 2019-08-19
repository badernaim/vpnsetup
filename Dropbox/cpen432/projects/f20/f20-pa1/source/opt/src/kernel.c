/**
 * @file   kernel.c
 *
 * @brief  Project 1 optimization part
 *
 * @date   9/20/2016
 * @author Kyuin Lee <kyuinl@andrew.cmu.edu>
 */

#include <arm.h>
#include <kstdint.h>
#include <uart.h>
#include <printk.h>
#include <basic_timer.h>
#include <printk.h>

#define SIZE 500
int array1[SIZE],array2[SIZE];

void optimized(int array[SIZE]);
void unoptimized(int array[SIZE]);

void kernel_main(void) {
  
  int index;
  int good = 1;
  uint32_t timer_value;

  uart_init();
  //initialize the two arrays
  for (index = 0; index < SIZE; ++index) {
    array1[index] = index;
    array2[index] = index;
  }
  
  //Start measuring ticks for optimized function
  printk("+++++++Optimized Function+++++++\n");
  start_countdown();
  optimized(array1);
  timer_value = timer_latch();
  printk("%d\n",timer_value);

  //Start measuring ticks for unoptimized function
  printk("+++++++Unoptimized Function+++++++\n");
  start_countdown();
  unoptimized(array2);
  timer_value = timer_latch();
  printk("%d\n",timer_value);

  //checking the correctness.
  for (index = 0; index < SIZE; ++index)  {
    if (array1[index] != array2[index]) {   
      //Print failed
      printk("index: %d\n", index);
      printk("my:  %u\n", array1[index]);
      printk("sys: %u\n", array2[index]);
      printk("+++++++Test Failed+++++++\n");
      good = 0;
      break;
    }
  }
  
  if (good) {
    //Print passed
    printk("+++++++Test Passed+++++++\n");
  }
  
  while (1) {
    delay_cycles(100000);
  }
  
}
