// By Muhammad Hasnain Awan
// A game that demonstrates you as a captain to eliminate enemy ships 

#include <iostream>
using namespace std;

int main() {
    // An ocean battlefield with enemy ships positioned at various points
    bool ships[5][5] {
        {0,1,0,1,0},
        {0,0,0,0,0},
        {1,0,0,0,1},
        {0,0,0,1,0},
        {0,0,0,0,0}
    };

    // We have limited rockets. None should be missed in order to win the game.
    // player has to enter x and y coordinates of the enemy ship to target rocket.
    int rockets = 5, shipCount = 5;
    int x,y, score = 0;

    do {
        for (int i = 0; i < 5;i++) {
            for (int j = 0;j < 5;j++){
                cout << ships[i][j] << "   ";
                if (j == 4) {cout << "\n";}
            }
        }

        cout << "Enter x coordinate: "; cin >> x;
        cout << "Enter y coordinate: "; cin >> y;

        if (ships[x][y]) {
            ships[x][y] = 0;
            rockets-=1;
            shipCount-=1;
            score+=1;
        }
        else {
            rockets-=1;
        }
        
        cout << "\nRockets remaining: " << rockets << "\n";
        cout << "Ships remaining: " << shipCount << "\n";
    }
    while (rockets > 0);

    // conclusion
    if (shipCount == rockets) {
        cout << "\n\nAll enemy ships successfully eliminated!";
    }
    cout << "\nScore: " << score << "\n";

    return 0;
}