#!/bin/bash
gcc -wall -c *.c
ar -cvq liball.a *.o
