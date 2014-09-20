#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, 
    char* argv[]){

    const string & toPig = "topig";
    const string & fromPig = "frompig";
    string line;

    if(argc != 2){
        cerr << "Pig Latin program requires an single"
             << " argument, (topig, frompig)" << endl;
        exit(1);
    }
    
    if(strcmp(argv[1], toPig.c_str()) == 0){
        cout << "Program is toPig" << endl;
        while( getline(cin, line) ){
            cout << line << endl;
        }
    } else if(strcmp(argv[1], fromPig.c_str()) == 0){
        cout << "Program is fromPig" << endl;
    } 
    else{
        cerr << "Error: argument must be topig or frompig" << endl;
        exit(1);
    }
   
    return 0;
}
