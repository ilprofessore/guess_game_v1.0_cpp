main: main.o lvl01.o lvl02.o lvl03.o upper_to_lower.o
	g++ main.o lvl01.o lvl02.o lvl03.o upper_to_lower.o -o main

main.o: main.cpp
	g++ -c main.cpp

upper_to_lower.o: upper_to_lower.cpp upper_to_lower.hpp
	g++ -c upper_to_lower.cpp upper_to_lower.hpp

lvl01.o: lvl01.cpp lvl01.hpp upper_to_lower.cpp upper_to_lower.hpp
	g++ -c lvl01.cpp lvl01.hpp upper_to_lower.cpp upper_to_lower.hpp

lvl02.o: lvl02.cpp lvl02.hpp upper_to_lower.cpp upper_to_lower.hpp
	g++ -c lvl02.cpp lvl02.hpp upper_to_lower.cpp upper_to_lower.hpp

lvl03.o: lvl03.cpp lvl03.hpp upper_to_lower.cpp upper_to_lower.hpp
	g++ -c lvl03.cpp lvl03.hpp upper_to_lower.cpp upper_to_lower.hpp

clean:
	rm *.o *.gch main