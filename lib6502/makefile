lib: cpu6502.o statusFlags6502.o memory6502.o emu6502.o
	ar rvs lib/emu6502.a obj/emu6502.o obj/memory6502.o obj/cpu6502.o

cpu6502.o: statusFlags6502.o memory6502.o emu6502.o cpu/cpu6502.h cpu/cpu6502.cpp
	g++ -c -o obj/cpu6502.o -I. cpu/cpu6502.cpp

statusFlags6502.o: statusFlags/statusFlags6502.h emu6502.h
	g++ -c -o obj/statusFlags6502.o -I. statusFlags/statusFlags6502.h

memory6502.o: memory/memory6502.h emu6502.h
	g++ -c -o obj/memory6502.o -I. memory/memory6502.h

emu6502.o: emu6502.h
	g++ -c -o obj/emu6502.o -I. emu6502.h
