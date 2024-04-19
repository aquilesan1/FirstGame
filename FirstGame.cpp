#include <iostream>
#include <conio.h>

using namespace std;

char map[6][5] = {{ '-', '-', '-', '-', '-'},
                        {' ', ' ', 'w', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', ' ', ' ', ' '},
                        {' ', ' ', 'v', ' ', ' '},
                        {'_', '_', '_', '_', '_'}};

void loop(){

    for (int i = 0; i < 6; i++){
    
        for (int j = 0; j < 5; j++){
        
            cout << map[i][j];
        }
        
        cout << '\n';
    }
}

int main(){
    int count;
    char inpStart;
    char inpExit;
    
    cout << "Welcome to Star Destroyer\nPress S to start: ";
    
    cin >> inpStart;
    
    clrscr();
    
    if (inpStart == 's'){
    
    loop();
    
    char inp;
    cin >> inp;
    
    if (inp == 'x'){
        
        clrscr();
        map[3][2] = '.';
    }
    
    loop();
    
    cin >> inp;
    
    if (inp == 'x'){
    
        // Do for loop
    
        clrscr();
        map[3][2] = ' ';
        map[2][2] = '.';
    }
    
    loop();
    
    cin >> inp;
    
    if (inp == 'x'){
    
        clrscr();
        map[2][2] = ' ';
        map[1][2] = '*';
    }
    
    loop();
    
    cout << "You have won!\nPress E to exit: ";
    
    cin >> inpExit;
    
    }
    
    return 0;
}