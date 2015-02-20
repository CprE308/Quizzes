PDFS := $(patsubst %.md,%.pdf,$(wildcard *.md))
all: PDFS 

%.pdf: %.md
	pandoc -s -o $@ $< -V geometry:margin=1in

	




