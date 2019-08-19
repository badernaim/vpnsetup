/**
 * @file   printk.h
 *
 * @brief  kernel debugging routine
 *
 * @date   submission_date
 * @author your_name <email>
 */

#ifndef _PRINTK_H_
#define _PRINTK_H_

/**
 * @brief A kernel printf() function for debugging the kernel
 *
 * @param format the format string
 * @return 0 on success or -1 on failure
 */
int printk(const char *format, ...);

#endif /* _PRINTK_H_ */
