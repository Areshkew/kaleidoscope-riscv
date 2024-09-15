# export CLASSPATH=".:/home/utp/Descargas/comparch/kaleidoscope/antlr-4.7-complete.jar:$CLASSPATH"
#java -cp ".:../antlr-4.7-complete.jar" org.antlr.v4.gui.TestRig Kaleidoscope program -gui ../fib.kl

CC=g++ -std=c++11

ANTLR=antlr-4.7-complete.jar
ANTLR_RT=/tmp/rt
GENERATED=generated

INCS=-I$(GENERATED) -Iantlr4-cpp-runtime-4.7-source/runtime/src

all: kalc

parser: Kaleidoscope.g4 
	java -jar $(ANTLR) -Dlanguage=Cpp -visitor -o $(GENERATED) -package Kaleidoscope Kaleidoscope.g4
	
kalc: parser KaleidoscopeLexer.o KaleidoscopeParser.o main.cpp
	$(CC) $(INCS) -Lantlr4-cpp-runtime-4.7-source/dist -o kalc main.cpp KaleidoscopeLexer.o KaleidoscopeParser.o -lantlr4-runtime

KaleidoscopeLexer.o: $(GENERATED)/KaleidoscopeLexer.h $(GENERATED)/KaleidoscopeLexer.cpp
	$(CC) $(INCS) -c $(GENERATED)/KaleidoscopeLexer.cpp -o KaleidoscopeLexer.o

KaleidoscopeParser.o: $(GENERATED)/KaleidoscopeParser.h $(GENERATED)/KaleidoscopeParser.cpp
	$(CC) $(INCS) -c $(GENERATED)/KaleidoscopeParser.cpp -o KaleidoscopeParser.o

jparser: Kaleidoscope.g4
	java -jar $(ANTLR) -Dlanguage=Java -o jgenerated/ Kaleidoscope.g4
	javac -cp .:$(ANTLR):jgenerated/ jgenerated/Kaleidoscope*.java

clean:
	rm -rf generated jgenerated KaleidoscopeLexer.o KaleidoscopeParser.o kalc
