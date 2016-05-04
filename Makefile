HEADERS = GameState.h Resources/tictactoeserverstub.h TicTacToeServer.h Resources/registration.h
SOURCE = main.cpp TicTacToeServer.cpp GameState.cpp
LIBS = -ljsoncpp -lmicrohttpd -ljsonrpccpp-common -ljsonrpccpp-server -ljsonrpccpp-client
OBJS = main.o TicTacToeServer.o GameState.o
TARGET = ./Targets/TicTacToeBot

build: $(HEADERS) $(SOURCE)
	g++ $(SOURCE) $(LIBS) -o $(TARGET)

clean: $(OBJS)
	rm $(OBJS)

install: build
	cp $(TARGET) .