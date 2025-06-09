.PHONY: all clean

all: bin/mapper bin/reducer bin/mapper_dev bin/reducer_dev

bin/mapper: mapper.cpp src/record.hpp
	mkdir -p bin
	g++ -o $@ mapper.cpp

bin/mapper_dev: mapper_dev.cpp src/record.hpp
	mkdir -p bin
	g++ -o $@ mapper_dev.cpp

bin/reducer: reducer.cpp src/record.hpp
	mkdir -p bin
	g++ -o $@ reducer.cpp

bin/reducer_dev: reducer_dev.cpp src/record.hpp
	mkdir -p bin
	g++ -o $@ reducer_dev.cpp


clean:
	rm -rf bin output