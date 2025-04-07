#!/usr/bin/env bash

if ls conditionals.sh; then
    echo "File exists!"
fi

if ls unconditionals.sh; then
    echo "unconditionals.sh exists!"
elif [ -f conditionals.sh ]; then
    echo "conditionals.sh exists!"
else
    echo "Files don't exist!"
fi