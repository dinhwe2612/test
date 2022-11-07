struct KEYBOARD {
    #define KEY_UP 72
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    #define KEY_DOWN 80
    #define KEY_ENTER 13
    int input() {
        int c, ex;
        c = getch();
        if (c && c != 224) {
            if (c == KEY_ENTER) {
                return 5;
            }
            return 0;
        }
        switch(ex = getch()) {
            case KEY_UP : return 1;
            case KEY_RIGHT : return 2;
            case KEY_DOWN : return 3;
            case KEY_LEFT : return 4;
        }
    }
} keyboard;
