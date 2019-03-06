//
// Created by zhangzhuo on 2019/2/27.
//
#ifndef _OV5647MIPI_CAMERA_SENSOR_PARA_H
#define _OV5647MIPI_CAMERA_SENSOR_PARA_H

#define OV5647MIPI_CAMERA_SENSOR_REG_DEFAULT_VALUE  \
    /* ARRAY: SENSOR.reg[11] */\
    {\
        /* STRUCT: SENSOR.reg[0] */\
        {\
            /* SENSOR.reg[0].addr */ 0xFFFFFFFF, /* SENSOR.reg[0].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[1] */\
        {\
            /* SENSOR.reg[1].addr */ 0xFFFFFFFF, /* SENSOR.reg[1].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[2] */\
        {\
            /* SENSOR.reg[2].addr */ 0xFFFFFFFF, /* SENSOR.reg[2].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[3] */\
        {\
            /* SENSOR.reg[3].addr */ 0xFFFFFFFF, /* SENSOR.reg[3].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[4] */\
        {\
            /* SENSOR.reg[4].addr */ 0xFFFFFFFF, /* SENSOR.reg[4].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[5] */\
        {\
            /* SENSOR.reg[5].addr */ 0xFFFFFFFF, /* SENSOR.reg[5].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[6] */\
        {\
            /* SENSOR.reg[6].addr */ 0xFFFFFFFF, /* SENSOR.reg[6].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[7] */\
        {\
            /* SENSOR.reg[7].addr */ 0xFFFFFFFF, /* SENSOR.reg[7].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[8] */\
        {\
            /* SENSOR.reg[8].addr */ 0xFFFFFFFF, /* SENSOR.reg[8].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[9] */\
        {\
            /* SENSOR.reg[9].addr */ 0xFFFFFFFF, /* SENSOR.reg[9].para */ 0xFFFFFFFF\
        },\
        /* STRUCT: SENSOR.reg[10] */\
        {\
            /* SENSOR.reg[10].addr */ 0xFFFFFFFF, /* SENSOR.reg[10].para */ 0xFFFFFFFF\
        }\
}
#define OV5647MIPI_CAMERA_SENSOR_CCT_DEFAULT_VALUE \
{ \
  {0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40},{0xFFFFFFFF,0x40}, \
}

#endif /* __CAMERA_SENSOR_PARA_H */
/* SENSOR FULL SIZE */
