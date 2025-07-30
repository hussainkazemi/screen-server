#!/bin/bash

make
if [ $? -eq 0 ]; then
    echo "Build successful. Running the program..."
    ./screen-server
else
    echo "Build failed. Exiting."
    exit 1
fi
