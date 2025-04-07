#!/usr/bin/env bash

hello="Hello!"
echo $hello

x=1
x=$(($x + 1))
echo $x

echo $@ $1

files=$(ls -x)
echo "$hello $files"