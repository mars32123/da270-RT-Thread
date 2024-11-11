

#ifndef SENSOR_MIRA_DA270_H__
#define SENSOR_MIRA_DA270_H__

#include <rtthread.h>
#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif
#include "da270.h"

#define DA270_ADDR_DEFAULT UINT8_C(0x27)

int rt_hw_da270_init(const char *name, struct rt_sensor_config *cfg);

#endif
