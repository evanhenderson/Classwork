#ifndef TFUNC_H
#define TFUNC_H
void user1Input(char array[][3], int size);
void user2Input(char array[][3], int size);
void compInput(char array[][3], int size);
int winner(char array[][3], int size, std::string name1, std::string name2);
void displayBoard(char array[][3], int size, std::string name1, std::string name2);
void replay(char array[][3], int size, std::string name1, std::string name2);

#endif