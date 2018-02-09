#!/bin/awk -f
BEGIN{ RS = "\n";
	FS = "\n";}


/^((int|const|extern|float|long|double|char|short|static|void) )+[a-zA-Z\_][a-zA-Z0-9\_]*\(.*\)/ {print $0 ";"}
