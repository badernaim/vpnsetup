/**
 * @file   basic_timer.h
 *
 * @brief  basic routines for interacting with the ARM timer.
 *
 * @date   
 * @author your_name <email>
 */

#ifndef _BASIC_TIMER_H_
#define _BASIC_TIMER_H_


#include <kstdint.h>	// to support uint32_t data types
#include <BCM2836.h>


/**
 * @brief Configures the arm timer to start running from the starting 
 *        point with the given frequency. The Timer should run in 32 bit mode, 
 *        with a prescaler of 1
 */
void start_countdown(void);

/**
 * @brief Called to check the value of the timer.
 *
 * @return timer's decrementing value
 */
uint32_t timer_latch(void);

#endif /* _BASIC_TIMER_H_ */
