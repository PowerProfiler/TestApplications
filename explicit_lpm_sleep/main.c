/*
 * Copyright (C) 2016 Michael Andersen <m.andersen@cs.berkeley.edu>
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     powerprofile_tests
 * @{
 *
 * @file
 * @brief       power profiling example app
 *
 * @author      Michael Andersen <m.andersen@cs.berkeley.edu>
 *
 * @}
 */

#include <stdio.h>
#include <arch/lpm_arch.h>

int main(void)
{
    lpm_arch_init();

    while(1) lpm_arch_set(LPM_SLEEP);

    return 0;
}
