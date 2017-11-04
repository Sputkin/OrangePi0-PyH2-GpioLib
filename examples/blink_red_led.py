#!/usr/bin/env python
#-*- coding:utf-8 -*-

from pyA20.gpio import port
from pyA20.gpio import gpio
import time

def main():
    status = 1
    onboard_led = port.RED_LED
   
    gpio.init()
    gpio.setcfg(onboard_led, gpio.OUTPUT)

    try:

       while(1):
         time.sleep(0.2)
         gpio.output(onboard_led,status)
         status = status ^ 1    

    except KeyboardInterrupt:   
         print "exit now"
        

if __name__ == "__main__":
    main()
