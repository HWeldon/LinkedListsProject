WeldonVectorSet.exe: Apps.o NumberSet.o
	g++ Apps.cpp NumberSet.cpp NumberSet.h -o WeldonVectorSet.exe
WeldonVectorSet.o: Apps.cpp NumberSet.h
	g++ -c Apps.cpp
NumberSet.o: NumberSet.cpp NumberSet.h
	g++ -c NumberSet.cpp
