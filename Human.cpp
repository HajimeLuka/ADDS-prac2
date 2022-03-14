#include <iostream>
#include "Human.h"

using namespace std; 

Human::Human(){

}


char Human::makeMove(){
 
 cout << "move:";
 cin>>move;
 return move;
 
}