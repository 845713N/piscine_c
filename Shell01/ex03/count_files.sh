#!/bin/sh
find . \( -type f -o -type d \) -print | wc -l | tr -d ' '