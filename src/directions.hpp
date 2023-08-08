//boardは11(先手偶)で埋められた6*7を想定
void direction_N1(int *moves1, int *board, int pos);
void direction_S1(int *moves1, int *board, int pos);
void direction_EW1(int *moves1, int *board, int pos);
void direction_NEW1(int *moves1, int *board, int pos);
void direction_SEW1(int *moves1, int *board, int pos);
void direction_PR1(int *moves1, int *board, int pos);
void direction_PB1(int *moves1, int *board, int pos);

void direction_N2(int *moves2, int *board, int pos);
void direction_EW2(int *moves2, int *board, int pos);
void direction_NEW2(int *moves2, int *board, int pos);
void direction_PR2(int *moves2, int *board, int pos);
void direction_PB2(int *moves2, int *board, int pos);

void direction_S3(int *moves3, int *board, int pos);
void direction_SEW3(int *moves3, int *board, int pos);
void direction_PR3(int *moves3, int *board, int pos);
void direction_PB3(int *moves3, int *board, int pos);

void direction_N1(int *moves1, int *board, int pos){
    if(board[pos - 6] <= 0){
        moves1[8 * pos - 47] = pos;//moves1[8 * (pos - 6) + 1] = pos;
    };
};
direction_S1(int *moves1, int *board, int pos){
    if([pos + 6] <= 0){
        moves1[8 * pos + 54] = pos;//moves1[8 * (pos + 6) + 6] = pos;
    };
};
void direction_EW1(int *moves1, int *board, int pos){
    if(board[pos - 1] <= 0){
        moves1[8 * pos - 5] = pos;//moves1[8 * (pos - 1) + 3] = pos;
    };
    if(board[pos + 1] <= 0){
        moves1[8 * pos + 12] = pos;//moves1[8 * (pos + 1) + 4] = pos;
    };
};
void direction_NEW1(int *moves1, int *board, int pos){
    if(board[pos - 7] <= 0){
        moves1[8 * pos - 56] = pos;//moves1[8 * (pos - 7) + 0] = pos;
    };
    if(board[pos - 4] <= 0){
        moves1[8 * pos - 38] = pos;//moves1[8 * (pos - 5) + 2] = pos;
    };
};
void direction_SEW1(int *moves1, int *board, int pos){
    if(board[pos + 4] <= 0){
        moves1[8 * pos + 45] = pos;//moves1[8 * (pos + 5) + 5] = pos;
    };
    if(board[pos + 6] <= 0){
        moves1[8 * pos + 63] = pos;//moves1[8 * (pos + 7) + 7] = pos;
    };
};
void direction_PR1(int *moves1, int *board, int pos){
    int p = pos;
    int illegal = 0;
    while(1){
        p -= 6;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 1] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    ;}
    p = pos;
    illegal = 0;
    while(1){
        p += 6;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 6] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p -= 1;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 3] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p += 1;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 4] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
};
void direction_PB1(int *moves1, int *board, int pos){
    int p = pos;
    int illegal = 0;
    while(1){
        p -= 7;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p -= 5;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 2] = pos + illegal;
        if(this->board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p += 5;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 5] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p += 7;
        if(board[p] > 0){
            break;
        };
        moves1[8 * p + 7] = pos + illegal;
        if(board[p] != 0){
            illegal = -25;
        };
    };
};

void direction_N2(int *moves2, int *board, int pos){
    if(7 <= pos && pos < 12 && board[pos + 6] <= 0){
        moves2[5 * pos - 29] = pos;//moves1[5 * (pos - 6) + 1] = pos;
    };
};
void direction_NEW2(int *moves2, int *board, int pos){
    if(7 <= pos && pos < 12){
        if(pos != 7 && board[pos + 5] <= 0){
            moves2[5 * pos - 35] = pos;//moves1[5 * (pos - 7) + 0] = pos;
        };
        if(pos != 11 && board[pos + 7] <= 0){
            moves2[5 * pos - 23] = pos;//moves1[5 * (pos - 5) + 2] = pos;
        };
    };
};
void direction_EW2(int *moves2, int *board, int pos){
    if(8 <= pos && pos < 12 && board[pos - 1] <= 0){
        moves2[5 * pos - 2] = pos;//moves1[5 * (pos - 1) + 3] = pos;
    };
    if(7 <= pos && pos < 11 && board[pos + 1] <= 0){
        moves2[5 * pos + 9] = pos;//moves1[5 * (pos + 1) + 4] = pos;
    };
};
void direction_PR2(int *moves2, int *board, int pos){
    int p = pos;
    int illegal = 0;
    while(1){
        p -= 6;
        if(this->board[p] > 0){
            break;
        };
        if(p < 12){
            moves2[5 * p + 1] = pos + illegal;
        };
        if(this->board[p] != 0){
            illegal = -25;
        };
    ;}
    p = pos;
    illegal = 0;
    while(1){
        p -= 1;
        if(this->board[p] > 0){
            break;
        };
        if(p < 12){
            moves2[5 * p + 3] = pos + illegal;
        };
        if(this->board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p += 1;
        if(board[p] > 0){
            break;
        };
        if(p < 12){
            moves2[5 * p + 4] = pos + illegal;
        };
        if(board[p] != 0){
            illegal = -25;
        };
    };
};
void direction_PB2(int *moves2, int *board, int pos){
    int p = pos;
    int illegal = 0;
    while(1){
        p -= 7;
        if(board[p] > 0){
            break;
        };
        if(p < 12){
            moves2[5 * p] = pos + illegal;
        };
        if(board[p] != 0){
            illegal = -25;
        };
    };
    p = pos;
    illegal = 0;
    while(1){
        p -= 5;
        if(board[p] > 0){
            break;
        };
        if(p < 12){
            moves2[5 * p + 2] = pos + illegal;
        };
        if(board[p] != 0){
            illegal = -25;
        };
    };
};

void direction_S3(int *moves3, int *board, int pos){
    if(pos < 12){
        moves3[3 * pos + 19] = pos;//moves1[3 * (pos + 6) + 1] = pos;
    }
};
void direction_SEW3(int *moves3, int *board, int pos){
    if(pos < 12){
        if(board[pos + 5] <= 0){
            moves3[3 * pos + 12] = pos;//moves1[3 * (pos + 5) + 0] = pos;
        };
        if(board[pos + 7] <= 0){
            moves3[3 * pos + 23] = pos;//moves1[3 * (pos + 7) + 2] = pos;
        };
    };
};
void direction_PR3(int *moves3, int *board, int pos){
    if(pos < 12){
        int p = pos;
        int illegal = 0;
        while(1){
            p += 6;
            if(board[p] > 0){
                break;
            };
            moves3[3 * p + 1] = pos + illegal;
            if(board[p] != 0){
                illegal = -25;
            };
        };
    };
};
void direction_PB3(int *moves3, int *board, int pos){
    if(pos < 12){
        int p = pos;
        int illegal = 0;
        while(1){
            p += 5;
            if(board[p] > 0){
                break;
            };
            moves1[3 * p] = pos + illegal;
            if(board[p] != 0){
                illegal = -25;
            };
        };
        p = pos;
        illegal = 0;
        while(1){
            p += 7;
            if(board[p] > 0){
                break;
            };
            moves1[3 * p + 2] = pos + illegal;
            if(board[p] != 0){
                illegal = -25;
            };
        };
    };
};
