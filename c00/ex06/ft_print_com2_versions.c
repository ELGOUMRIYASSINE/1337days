// 🔹 Version 1 – Your First Version (5 separate ft_putchar calls)

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb2(void){
    int i = 0;
    while (i <= 98){
        int j = i + 1;
        while (j <= 99){
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(j / 10 + '0');
            ft_putchar(j % 10 + '0');
            if (i != 98){
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}

// 🔹 Version 2 – Using char variables and buffer

void ft_print_comb2(void){
    int i = 0;
    while (i <= 98){
        int j = i + 1;
        while (j <= 99){
            char i1 = i / 10 + '0';
            char i2 = i % 10 + '0';
            char j1 = j / 10 + '0';
            char j2 = j % 10 + '0';
            char comb[5] = {i1, i2, ' ', j1, j2};
            write(1, comb, 5);
            if (i != 98){
                write(1, ", ", 2);
            }
            j++;
        }
        i++;
    }
}

// 🔹 Version 3 – Your Optimized Version (Full write with conditional size)

void ft_print_comb2(void){
    int i = 0;
    while (i <= 98){
        int j = i + 1;
        while (j <= 99){
            char i1 = i / 10 + '0';
            char i2 = i % 10 + '0';
            char j1 = j / 10 + '0';
            char j2 = j % 10 + '0';
            if (i != 98){
                char comb[7] = {i1, i2, ' ', j1, j2, ',', ' '};
                write(1, comb, 7);
            } else {
                char comb[5] = {i1, i2, ' ', j1, j2};
                write(1, comb, 5);
            }
            j++;
        }
        i++;
    }
}

// 🔹 Version 4 – Most Optimized (Build once, dynamic length) ✅

void ft_print_comb2(void){
    int i = 0;
    while (i <= 98){
        int j = i + 1;
        while (j <= 99){
            char i1 = i / 10 + '0';
            char i2 = i % 10 + '0';
            char j1 = j / 10 + '0';
            char j2 = j % 10 + '0';
            char comb[7] = {i1, i2, ' ', j1, j2, ',', ' '};
            int len = (i != 98) ? 7 : 5;
            write(1, comb, len);
            j++;
        }
        i++;
    }
}

// ✅ Version 4 is the cleanest and fastest in real-world usage because:

// Only one write() per combination

// Avoids duplication of buffer code

// Memory is well-managed
