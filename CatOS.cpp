#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <experimental/random>
#define RandomMaxNumber 1415926535 //максимальное число рандома.
bool mode;
char usermode;
#define username "root" //имя
std::string name;
std::string command;
#define passwd "1234567890" //пароль
std::string passwdcin;
void info()
{
std::cout << std::endl; //инфа о оболочке
std::cout << "\033[31m" << "         @@           @@     \n" << "\033[0m";
std::cout << "\033[32m" << "        @  @         @  @    \n" << "\033[0m";
std::cout << "\033[33m" << "       @-  -@       @-  -@   \n" << "\033[0m";
std::cout << "\033[34m" << "      @-    -@     @-    -@  \n" << "\033[0m";
std::cout << "\033[35m" << "   @@@@@@@@@@@@@@@@@@@@@@@@@@@\n" << "\033[0m";
std::cout << "\033[36m" << "   @.........................@\n" << "\033[0m";
std::cout << "\033[39m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[34m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[32m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[31m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[32m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[33m" << "   @....****.........****....@\n" << "\033[0m";
std::cout << "\033[34m" << "   @.........................@\n" << "\033[0m";
std::cout << "\033[35m" << "   @.........................@\n" << "\033[0m";
std::cout << "\033[36m" << "   @@@@@@@@@@@@@@@@@@@@@@@@@@@\n" << "\033[0m";
std::cout << "=================================\n";
std::cout << "           CatShell 1.0          \n";
std::cout << "=================================\n";
std::cout << "         By Monimon Moon         \n";
std::cout << "=================================\n";
std::cout << std::endl;
}
void time ()
{
time_t time;
std::time(&time);
std::cout << std::ctime(&time);
}
void save ()
{
std::string filename;
std::string text;
std::cout << "Text?: ";
std::cin.ignore();
std::getline(std::cin, text);
std::cout << "File name?: ";
std::getline(std::cin, filename);
filename += ".cat";
std::ofstream savecat;
savecat.open(filename);
savecat << text;
savecat.close();
std::cout << "\n";
}
void read ()
{
std::string text;
std::string filename;
std::cout << "File name?: ";
std::cin.ignore();
std::getline(std::cin, filename);
filename += ".cat";
std::cout << filename << "\n";
std::ifstream in(filename);
std::getline(in, text);
std::cout << text <<"\n";
}
void execprog ()
{
std::string filenamep;
std::cout << "File name?: ";
std::cin >> command;
filenamep += "./";
filenamep += command;
std::system(filenamep.c_str());
}
void two ()
{
short unsigned int twocout = 2;
for (int i = 0; i < 14; i++) {
twocout = twocout + twocout;
std::cout << twocout << "\n";
}
std::cout << "done\n";
}
void hot() //орел или решка
{
short int hot;
hot = std::experimental::randint(0, 1);
if (hot == 1) {
std::cout << "Tails\n";
}
else {
std::cout << "Heads\n";
}
}
void logo()
{
unsigned char splash;
splash = std::experimental::randint(1, 5);
std::cout << std::endl;
std::cout << "WELCOME TO:\n";
std::cout << R"(
   ____      _   ____  _          _ _
 / ___|__ _| |_/ ___|| |__   ___| | |
| |   / _` | __\___ \| '_ \ / _ | | |
| |__| (_| | |_ ___) | | | |  __| | |
 \____\__,_|\__|____/|_| |_|\___|_|_|)";
std::cout << std::endl;
std::cout << "Version 1.1\n";
std::cout << "===============================\n";
switch(splash) {
case 1:
std::cout << "this is splash text :3\n";
break;
case 2:
std::cout << "haaaaaaaaaaaaaaaaaai!!\n";
break;
case 3:
std::cout << "99 bottles of beer on the wall\n";
break;
case 4:
std::cout << "GET OUT!!\n";
break;
case 5:
std::cout << "btw i use debian\n";
break;
};
std::cout << "===============================\n";
}
void help() //список комманд
{
std::cout << std::endl;
std::cout << "all commands\n";
std::cout << "'info' - system information.\n";
std::cout << "'help' - list of commands.\n";
std::cout << "'kalcul' - simple calculator.\n";
std::cout << "'cat#0' - interpreter of the most useless programming language in the world.\n";
std::cout << "'rand' - output PSEUDO random numbers.\n";
std::cout << "'randtex' - random text generator.\n";
std::cout << "'clear' - cleaning the console.\n";
std::cout << "'cube' - draws a cube based on the entered data.\n";
std::cout << "'numb' - guess the number game.\n";
std::cout << "'hot' - heads or tails.\n";
std::cout << "'99' - lyrics of the song ''99 Bottles of Beer''.\n";
std::cout << "'whoami' - print username.\n";
std::cout << "'h' - hello world.\n";
std::cout << "'time'.\n";
std::cout << "'2'.\n";
std::cout << "'notebook' - save file.\n";
std::cout << "'read' - read file.\n";
std::cout << "'exec' - execute program.\n";
std::cout << "'exit' - logout.\n";
std::cout << std::endl;
}
void catlang() //псевдо язык
{
std::cout << std::endl;
std::cout << "'Catend#0+-' - is a non-Turing complete joke programming language, it has only 4 commands: \n";
std::cout << "'cat' - prints 'meow!!' to the console.\n";
std::cout << "'#' - resets the counter.\n";
std::cout << "'0' - displays the counter value.\n";
std::cout << "'+' - increments the counter value (initially it is 0).\n";
std::cout << "'-' - decrements the counter value (initially it is 0).\n";
std::cout << "These are all the capabilities of the language and interpreter.\n";
std::cout << "And yes, 'end' closes the interpreter.\n";
std::cout << std::endl;
unsigned char counter = 0;
while(true) {
std::cin >> command;
if (command == "cat") {
std::cout << "meow!!" << "\n";
}
if (command == "#") {
counter = 0;
}
if (command == "0") {
std::cout << counter;
std::cout << std::endl;
}
if (command == "+") {
++counter;
}
if (command == "-") {
--counter;
}
if (command == "end") {
return;
}
}
}
void cls() { //отчистка экрана (типо)
for (int i = 0; i < 300; i++) {
std::cout << std::endl;
}
}
void gg() //99 бутылок пива
{
unsigned char pubbeer = 0;
for (int beer = 99; beer > 1; --beer) {
pubbeer = beer;
std::cout << pubbeer << " bottles of beer on the wall, " << pubbeer << " bottles of beer." << "\n";
--pubbeer;
std::cout << "Take one down, pass it around, " << "\n" << pubbeer << " bottles of beer on the wall." << "\n";
std::cout << std::endl;
}
std::cout << pubbeer << " bottles of beer on the wall, " << pubbeer << " bottles of beer." << "\n";
std::cout << "Take one down and pass it around," << "\n" << "No more bottles of beer on the wall.\n";
std::cout << std::endl;
std::cout << "No more bottles of beer on the wall, no more bottles of beer. \n";
std::cout << "Go to the store and buy some more," << "\n" << "99 bottles of beer on the wall." << "\n";
}
void cube() //рисование куба
{
//переменные проги которая рисует куб
int width = 0; //ширина
int height = 0; //высота
std::string cube; //куб по ширине
//переменные проги которая рисует куб
std::cout << "Width: ";
std::cin >> width;
std::cout << std::endl;
std::cout << "Height: ";
std::cin >> height;
std::cout << std::endl;
for (int cubedunt = 0; cubedunt < width; ++cubedunt) {
cube += "#";
cube += " ";
}
for (int cubedunt = 0; cubedunt < height; ++cubedunt) {
std::cout << cube << "\n";
}
std::cout << std::endl;
}
void kalcul() //калькулятор
{
int one = 0;
int two = 0;
int otv = 0;
int mod = 0;
std::cout << std::endl;
std::cout << "'?' - list of all operators (one and two are ignored).\n";
std::cout << std::endl;
std::cout << "Enter operator: ";
std::cin >> usermode;
if (usermode != '?') {
std::cout << "One number: ";
std::cin >> one;
if (usermode != '#') {
std::cout << "Two number: ";
std::cin >> two;
}
}
if (usermode == '#') {
std::cout << std::endl;
std::cout << "Square: ";
std::cout << one * one;
std::cout << std::endl;
std::cout << "Cube: ";
std::cout << one * one * one << "\n";
std::cout << std::endl;
}
else if (usermode == '+') {
otv = one + two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
else if (usermode == '-') {
otv = one - two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
else if (usermode == '*') {
otv = one * two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
}
else if (usermode == '/') {
if (two == 0) {
std::cout << std::endl;
std::cout << "Err: You can't divide by zero.\n";
std::cout << std::endl;
return;
}
otv = one / two;
mod = one % two;
std::cout << "Answer: ";
std::cout << otv;
std::cout << std::endl;
std::cout << "Modulo: ";
std::cout << mod;
std::cout << std::endl;
}
else if (usermode == '?') {
std::cout << std::endl;
std::cout << "operators\n";
std::cout << "'?' - information about operators.\n";
std::cout << "'+' - addition.\n";
std::cout << "'-' - subtraction.\n";
std::cout << "'*' - multiplication.\n";
std::cout << "'/' - division with remainder.\n";
std::cout << "'#' - finding the square and cube of the one number (two is ignored).\n";
std::cout << std::endl;
}
else {
std::cout << std::endl;
std::cout << "Err: Unknown operator.\n";
std::cout << std::endl;
}
}
void RtextGen()
{
short int end = std::experimental::randint(5, 200);
short int wordid;
const std::string words[]{"cat ", "is ", "on ", "cinnamon ", "the ", "make ", "lol ", "limbo ", "hell ", "cassette ", "cup ", "linux ", "shit ", "you ", "need ", "loved ", ", ", ". ", "! ", "# ", ">_< ", "& "};
for (int i = 0; i < end; i++) {
wordid = std::experimental::randint(0, 21);
if (wordid > 21 || end > 200) {
std::cout << "Word ID or End unknown value.\n";
return;
}
std::cout << words[wordid];
}
std::cout << ".\n";
}
void Rnumb()
{
std::cout << std::experimental::randint(0, RandomMaxNumber);
std::cout << std::endl;
}
void numbgame()
{
//переменные игры угадай число
int level = 0;
int answer = 0;
int uanswer = 0;
int dvoik = 2;
//переменные игры угадай число

std::cout << "----------------\n";
std::cout << "     N U M B    \n";
std::cout << "----------------\n";
std::cout << "Classic Mode (1)\n";
std::cout << "----------------\n";
std::cout << "Endless Mode (2)\n";
std::cout << "----------------\n";
std::cout << std::endl;
std::cout << "Mode: ";
std::cin >> usermode;
if (usermode == '2') {
while (true) {
++level;
answer = std::experimental::randint(0, level);
if (name == "root") {
std::cout << "answer: ";
std::cout << answer;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to ";
std::cout << level;
std::cout << ": ";
std::cin >> uanswer;
if (uanswer == answer) {
std::cout << "you guessed right =)\n";
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << "score: ";
std::cout << level * 10 - 10;
std::cout << std::endl;
return;
}
}
}
if (usermode == '1') {
for (int i = 0; i < 4; i++) {
answer = std::experimental::randint(0, dvoik);
if (name == "root") {
std::cout << "answer: ";
std::cout << answer;
std::cout << std::endl;
}
std::cout << "guess a number in the range from 0 to ";
std::cout << dvoik;
std::cout << ": ";
std::cin >> uanswer;
if (uanswer == answer) {
std::cout << "you guessed right =)\n";
}
else {
std::cout << "you guessed wrong =(\n";
std::cout << std::endl;
return;
}
dvoik = dvoik + dvoik;
}
std::cout << std::endl;
std::cout << "you win!! (≧ ▽ ≦)\n";
}
}
int main()
{
logo();
while(true) {
std::cout << "Username: ";
std::cin >> name;
if (name == "exit") {
goto exit;
}
if (name == "debug") {
goto system;
}
std::cout << "Password: ";
std::cin >> passwdcin;
if (passwdcin == "exit") {
goto exit;
}
if (name == username && passwd == passwdcin)
{
std::cout << std::endl;
std::cout << "Hello " << name << "!!\n";
std::cout << std::endl;
break;
}
else
{
std::cout << std::endl;
std::cout << "incorrect password or username.\n";
std::cout << std::endl;
}
}
std::cout << "Do you want to enable protection mode?\n";
std::cout << "If you enable it, you can exit the shell only by entering the password. (y/n)\n";
std::cout << ">> ";
std::cin >> usermode;
if (usermode == 'y') {
mode = true;
std::cout << "protection mode enable.\n";
}
else {
mode = false;
std::cout << "protection mode disable.\n";
}
std::cout << std::endl;
std::cout << "type 'help' to list shell commands.\n";
std::cout << std::endl;
while(true) {
system:
std::cout << name << ">> ";
std::cin >> command;
if (command == "info") {
info();
}
else if (command == "help") {
help();
}
else if (command == "time") {
time();
}
else if (command == "2") {
two();
}
else if (command == "clear") {
cls();
}
else if (command == "99") {
gg();
}
else if (command == "kalcul") {
kalcul();
}
else if (command == "notebook") {
save();
}
else if (command == "read") {
read();
}
else if (command == "exec") {
execprog();
}
else if (command == "rand") {
Rnumb();
}
else if (command == "randmax") {
std::cout << RandomMaxNumber;
std::cout << std::endl;
}
else if (command == "randtex") {
RtextGen();
}
else if (command == "whoami") {
std::cout << name << "\n";
}
else if (command == "h") {
std::cout << "Hello, world!\n";
}
else if (command == "hot") {
hot();
}
else if (command == "rm" || command == "mkdir" || command == "cd" || command == "ls") {
std::cout << "nahh :3\n";
}
else if (command == "cube") {
cube();
}
else if (command == "numb") {
numbgame();
}
else if (command == "cat#0") {
catlang();
}
else if (command == "exit") {
if (mode == false) {
std::cout << std::endl;
std::cout << "Goodbye!!\n";
std::cout << std::endl;
break;
}
if (mode == true) {
std::cout << "Password: ";
std::cin >> passwdcin;
if (passwdcin == passwd) {
std::cout << std::endl;
std::cout << "Goodbye!!\n";
std::cout << std::endl;
break;
}
else {
std::cout << "incorrect password.\n";
}
}
}
else {
std::cout << command;
std::cout << ": command not found.\n";
}
}
exit:
return 0;
}
