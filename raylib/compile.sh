#!/bin/bash

codeinput=(
	"./src/main.c"
)

linker_flags=(
	"-std=c99"
	"-lraylib"
	"-lGL"
	"-lm"
	"-lpthread"
	"-ldl"
	"-lrt"
	"-lX11"
)


output_file="test"

if [ ${#linker_flags[@]} -gt 0 ]; then
	echo "gcc ${codeinput[@]} ${linker_flags[@]} -o $output_file"
	gcc "${codeinput[@]}" "${linker_flags[@]}" -o "$output_file"
else
	echo "gcc ${codeinput[@]} -o $output_file"
	gcc "${codeinput[@]}" -o "$output_file"
fi
