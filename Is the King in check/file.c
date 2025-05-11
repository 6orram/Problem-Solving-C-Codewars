#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


char move[8][8] = 
    {
        "        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        ",
		"        "
    };

// check line is empty
bool isEmpty(const char board[8][8], const char move[8][8]){
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            if (move[i][j] == 'X' && (board[i][j] != ' ' && board[i][j] != 'K')){
                printf("%c - ",move[i][j]);
                printf("%c\n",board[i][j]);
                return false;
            }
        }
    }

    return true;
}

// clear the move
void clear(char t[8][8]){
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            t[i][j] = ' ';
        }
    }
}


// Queen
bool queen(int x, int y, int king_x, int king_y) {
    int temp_x = x;
    int temp_y = y;

    // M1
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M2
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M3
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M4
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M5
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M6
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M7
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M8
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        y += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    // no check
    return false;
}

// Rook
bool rook(int x, int y, int king_x, int king_y) {
    int temp_x = x;
    int temp_y = y;

    // M1
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M2
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M3
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M4
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    // no check
    return false;
}

// BiShop
bool bishop(int x, int y, int king_x, int king_y) {
    int temp_x = x;
    int temp_y = y;

    // M1
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M2
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M3
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y -= 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    x = temp_x;
    y = temp_y;

    // M4
    while (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y += 1;
        move[x][y] = 'X';
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    clear(move);

    // no check
    return false;
}

// Knight
bool knight(int x, int y, int king_x, int king_y) {
    int temp_x = x;
    int temp_y = y;

    // M1
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 2;
        y += 1;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M2
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y += 2;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M3
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y += 2;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M4
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        y += 1;
        x += 2;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M5
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 2;
        y -= 1;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M6
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y -= 2;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M8
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 1;
        y -= 2;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M8
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x -= 2;
        y -= 1;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    // no check
    return false;
}

// Pawn
bool pawn(int x, int y, int king_x, int king_y) {
    int temp_x = x;
    int temp_y = y;

    // M1
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y -= 1;
        if (x == king_x && y == king_y) {
            return true;
        }
    }

    x = temp_x;
    y = temp_y;

    // M2
    if (x > -1 && y > -1 && x < 8 && y < 8) {
        x += 1;
        y += 1;
        if (x == king_x && y == king_y) {
            return true;
        }
    }
    // no check
    return false;
}




bool king_is_in_check (const char chessboard[8][8])
{
    // cheking king position (i,j)
    int king_x,king_y;
    int kingFound = 0;

    for (king_x=0;king_x<8 && !kingFound;king_x++){
        for (king_y=0;king_y<8 && !kingFound;king_y++){
            if (chessboard[king_x][king_y] == 'K'){
                printf("King Position [%d : %d]\n",king_x--,king_y--);
                kingFound = 1;
            }
        }
    }


    // cheking White positions (i,j)
    int x,y;
    for (x=0;x<8;x++){
        for (y=0;y<8;y++){
            // Queen
            if (chessboard[x][y] == 'Q'){
                printf("Queen Position [%d : %d]\n",x,y);
                if(queen(x,y,king_x,king_y) == true && isEmpty(chessboard, move) == true){
                    return true;
                }
            }

            // Rook
            if (chessboard[x][y] == 'R'){
                printf("Rook Position [%d : %d]\n",x,y);
                if(rook(x,y,king_x,king_y) == true && isEmpty(chessboard, move) == true){
                    return true;
                }
            }

            // BiShop
            if (chessboard[x][y] == 'B'){
                printf("Bishop Position [%d : %d]\n",x,y);
                if(bishop(x,y,king_x,king_y) == true && isEmpty(chessboard, move) == true){
                    return true;
                }
            }

            // Knight
            if (chessboard[x][y] == 'N'){
                printf("Knight Position [%d : %d]\n",x,y);
                if(knight(x,y,king_x,king_y) == true){
                    return true;
                }
            }

            // Pawn
            if (chessboard[x][y] == 'P'){
                printf("Pawn Position [%d : %d]\n",x,y);
                if(pawn(x,y,king_x,king_y) == true){
                    return true;
                }
            }

           
        }
    }

    return false;
}

int main(){
    
    int results = king_is_in_check((const char[8][8]){
        "        ",
		"        ",
		"        ",
		"        ",
		"       K",
		"        ",
		"        ",
		"        "
        });

    if(results == true){
        printf("Checkmate!\n");
    } else {
        printf("Noop\n");
    }

    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            printf("%c",move[i][j]);
        }
        printf("\n");
    }

    return 0;
}