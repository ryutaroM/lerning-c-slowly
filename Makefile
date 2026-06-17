.PHONY: compile compile-%

ARGS=
compile:
	gcc -std=c23 ${ARGS}
compile-%:
	gcc -std=c23 "${@:compile-%=%}"


