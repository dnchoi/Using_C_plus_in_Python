import ctypes
from itertools import cycle
import os
from loguru import logger

logger.level("INFO")

@logger.catch()
class so_lib(object):
    def __init__(self, _libs):
        so_libs = "{}/{}".format(os.getcwd(), _libs)
        
        logger.trace(so_libs)
        self._c_instance = ctypes.cdll.LoadLibrary(so_libs)
        logger.trace(self._c_instance)
        
        self.obj = self._c_instance.sm()

    def add(self, a, b):
        out = self._c_instance.C_Add(self.obj, a, b)
        logger.info(out)

    def sum(self, a, b):
        out = self._c_instance.C_Sum(self.obj, a, b)
        logger.info(out)


if __name__ == "__main__":
    libs = so_lib("build/libsimple.so")
    
    libs.add(30, 54)
    libs.sum(30, 54)
    
    