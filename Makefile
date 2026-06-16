.PHONY compile:

compile-%:
	gcc -std=c23 "${@:compile-%=%}"

