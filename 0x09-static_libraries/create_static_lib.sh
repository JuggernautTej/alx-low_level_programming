#!/bin/bash

source_files=( $(find . -type f -name "*.c") )

gcc -c "${source_files[@]}"

object_files=( $(find . -type f -name "*.o") )
library_name="liball.a"

ar rcs "$library_name" "${object_files[@]}"

