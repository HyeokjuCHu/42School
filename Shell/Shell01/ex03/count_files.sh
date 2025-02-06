#!/bin/bash

file_count=$(find . -type f | wc -l)
dir_count=$(find . -type d | wc -l)

echo "$(( $file_count+$dir_count))"
