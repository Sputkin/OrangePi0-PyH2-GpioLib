/*
 *
 * This file is part of pyA20.
 * mapping.h is python GPIO extension.
 *
 * Copyright (c) 2014 Stefan Mavrodiev @ OLIMEX LTD, <support@olimex.com>
 *
 * pyA20 is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */


#ifndef __MAPPING_H
#define __MAPPING_H

#include "gpio_lib.h"

/**
Structure that describe all gpio
*/
typedef struct _pin {
    char name[10];          // The processor pin
    int offset;             // Memory offset for the pin
    int pin_number;         // Number on the connector
}pin_t;

typedef struct _gpio {
    char connector_name[10];
    pin_t pins[41];
}gpio_t;


gpio_t gpio[] = {


	{"gpio1",


		{
			{   "PA00",  SUNXI_GPA(0),   0   },
			{   "PA01",  SUNXI_GPA(1),   1   },
			{   "PA02",  SUNXI_GPA(2),   2   },
			{   "PA03",  SUNXI_GPA(3),   3   },
			{   "PA06",  SUNXI_GPA(6),   6   },
			{   "PA07",  SUNXI_GPA(7),   7   },
			{   "PA10",  SUNXI_GPA(10),  10  },
			{   "PA11",  SUNXI_GPA(11),  11  },
			{   "PA12",  SUNXI_GPA(12),  12  },
			{   "PA13",  SUNXI_GPA(13),  13  },
			{   "PA14",  SUNXI_GPA(14),  14  },
			{   "PA15",  SUNXI_GPA(15),  15  },
			{   "PA16",  SUNXI_GPA(16),  16  },
			{   "PA17",  SUNXI_GPA(17),  17  },  // connected with the red led
			{   "PA18",  SUNXI_GPA(18),  18  },
			{   "PA19",  SUNXI_GPA(19),  19  },

				{
					{   0,  0,  0}
            			},
        		}
    		},


	{"LED",


        	{
            	   	 {   "RED_LED",  SUNXI_GPA(17),  17   },  //PA17

				{
            	    			{   0,  0,  0}
            	         	},
        	}
    	},
};



#endif
