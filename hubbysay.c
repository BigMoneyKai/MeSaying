#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char comma[6][60] = {
    "   ",
    "   ",
    "   ",
    "   ",
    "🀫🀫 ",
    "🀫  ",
};

const char exclaim[6][60] = {
    "  🀫  ",
    " 🀫🀫🀫 ",
    "  🀫  ",
    "     ",
    "  🀫  ",
    "      ",

};

const char period[6][60] = {
    "   ",
    "   ",
    "   ",
    "   ",
    "🀫🀫 ",
    "🀫🀫 ",
};

const char space[6][60] = {
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
};

const char a[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫  🀫  ",
    " 🀫🀫 🀫 ",
    "      ",
};

const char b[6][60] = {
    "🀫     ",
    "🀫     ",
    "🀫🀫🀫   ",
    "🀫  🀫  ",
    " 🀫🀫   ",
    "      ",
};

const char c[6][60] = {
    "      ",
    " 🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫     ",
    " 🀫🀫🀫🀫 ",
    "      ",
};

const char d[6][60] = {
    "    🀫 ",
    "    🀫 ",
    " 🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "      ",
};

const char e[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫  🀫🀫 ",
    "🀫 🀫   ",
    " 🀫🀫🀫  ",
    "      ",
};

const char f[6][60] = {
    "  🀫🀫 ",
    " 🀫   ",
    "🀫🀫🀫🀫 ",
    " 🀫   ",
    " 🀫   ",
    "     ",
};

const char g[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "    🀫 ",
    " 🀫🀫🀫  ",
};

const char h[6][60] = {
    "🀫    ",
    "🀫    ",
    "🀫🀫🀫  ",
    "🀫  🀫 ",
    "🀫  🀫 ",
    "     ",
};

const char i[6][60] = {
    " 🀫  ",
    "    ",
    "🀫🀫  ",
    " 🀫  ",
    "🀫🀫🀫 ",
    "    ",
};

const char j[6][60] = {
    "    🀫 ",
    "      ",
    "   🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char k[6][60] = { 
    "🀫    ",
    "🀫    ",
    "🀫 🀫🀫 ",
    "🀫🀫🀫  ",
    "🀫  🀫 ",
    "     ",
};

const char l[6][60] = {
    " 🀫   ",
    "🀫🀫   ",
    " 🀫   ",
    " 🀫   ",
    "  🀫🀫 ",
    "     ",
};

const char m[6][60] = {
    "      ",
    " 🀫 🀫  ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char n[6][60] = {
    "      ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char o[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char p[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫     ",
    "🀫     ",
};

const char q[6][60] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "    🀫 ",
    "    🀫 ",
};

const char r[6][60] = {
    "     ",
    " 🀫🀫🀫 ",
    "🀫    ",
    "🀫    ",
    "🀫    ",
    "     ",
};

const char s[6][60] = {
    "      ",
    "  🀫🀫🀫 ",
    " 🀫🀫   ",
    "  🀫🀫  ",
    "🀫🀫🀫   ",
    "      ",
};

const char t[6][60] = {
    "  🀫   ",
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "   🀫🀫 ",
    "      ",
};

const char u[6][60] = {
    "      ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char v[6][60] = {
    "      ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "      ",
};

const char w[6][60] = {
    "      ",
    "🀫   🀫 ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    " 🀫 🀫  ",
    "      ",
};

const char x[6][60] = {
    "        ",
    " 🀫🀫  🀫🀫 ",
    "🀫  🀫 🀫  ",
    "   🀫🀫   ",
    " 🀫🀫  🀫🀫 ",
    "        ",
};

const char y[6][60] = {
    "      ",
    " 🀫  🀫 ",
    "🀫🀫  🀫 ",
    "  🀫🀫🀫 ",
    "    🀫 ",
    "  🀫🀫  ",
};

const char z[6][60] = {
    "     ",
    "🀫🀫🀫🀫 ",
    "  🀫  ",
    " 🀫   ",
    "🀫🀫🀫🀫 ",
    "     ",
};


const char A[6][60] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char B[6][60] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char C[6][60] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫     ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char D[6][60] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char E[6][60] = {
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char F[6][60] = {
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫     ",
    "      ",
};

const char G[6][60] = {
    " 🀫🀫🀫  ",
    "🀫     ",
    "🀫 🀫🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char H[6][60] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char I[6][60] = {
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char J[6][60] = {
    "  🀫🀫🀫 ",
    "    🀫 ",
    "    🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char K[6][60] = { 
    "🀫   🀫 ",
    "🀫  🀫  ",
    "🀫🀫🀫   ",
    "🀫  🀫  ",
    "🀫   🀫 ",
    "      ",
};

const char L[6][60] = {
    "🀫     ",
    "🀫     ",
    "🀫     ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char M[6][60] = {
    "🀫   🀫 ",
    "🀫🀫 🀫🀫 ",
    "🀫 🀫 🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char N[6][60] = {
    "🀫   🀫 ",
    "🀫🀫  🀫 ",
    "🀫 🀫 🀫 ",
    "🀫  🀫🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char O[6][60] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char P[6][60] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫     ",
    "🀫     ",
    "      ",
};

const char Q[6][60] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫 🀫🀫  ",
    " 🀫🀫 🀫 ",
    "      ",
};

const char R[6][60] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char S[6][60] = {
    " 🀫🀫🀫🀫 ",
    "🀫     ",
    " 🀫🀫🀫  ",
    "    🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char T[6][60] = {
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "      ",
};

const char U[6][60] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char V[6][60] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "      ",
};

const char W[6][60] = {
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    " 🀫 🀫  ",
    " 🀫 🀫  ",
    "      ",
};

const char X[6][60] = {
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    " 🀫 🀫  ",
    "🀫   🀫 ",
    "      ",
};

const char Y[6][60] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "  🀫   ",
    "      ",
};

const char Z[6][60] = {
    "🀫🀫🀫🀫🀫 ",
    "   🀫  ",
    "  🀫   ",
    " 🀫    ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char (*lower_letter_map[26])[60] = {
    a,
    b,
    c,
    d,
    e,
    f,
    g,
    h,
    i,
    j,
    k,
    l,
    m,
    n,
    o,
    p,
    q,
    r,
    s,
    t,
    u,
    v,
    w,
    x,
    y,
    z,

};

const char (*upper_letter_map[26])[60] = {
    A,
    B,
    C,
    D,
    E,
    F,
    G,
    H,
    I,
    J,
    K,
    L,
    M,
    N,
    O,
    P,
    Q,
    R,
    S,
    T,
    U,
    V,
    W,
    X,
    Y,
    Z
};

static void help() {
    printf("HubbySay is a simple print program, print everything you want!");
}

static void printHubby() {
    printf("      - /u\\ -\n");
    printf("  /  /   \\\\  \\  \\\n");
    printf("/ / \\/\\ / \\/\\\\ \\\n");
    printf("|/|  (Q) = (Q) |\\|\n");
    printf("  |      [     |  \n");
    printf("    [    3   ]    \n");
    printf("         -       \n");
    printf("\n");
    printf("                   \\         \n");
    printf("                    -         \n");
    printf("                     \\         \n");
    printf("\n");
}

static void printWord(const char* word) {
    for(size_t i = 0; i < 6; i++) {
        printf("( ");
        for(size_t j = 0; word[j] != '\0'; j++) {
            if(isupper(word[j]))
                printf("%s", upper_letter_map[word[j] - 'A'][i]); 
            else if(islower(word[j]))
                printf("%s", lower_letter_map[word[j] - 'a'][i]); 
            else if(word[j] == '!')
                printf("%s", exclaim[i]);
            else if(word[j] == ',')
                printf("%s", comma[i]);
            else if(word[j] == '.')
                printf("%s", period[i]);
            else if(isspace(word[j])) 
                printf("%s", space[i]);
            else 
                continue;
        }
        printf(")\n");
    }
}

int main(int argc, char** argv) {
    if(argc == 1) {
        help();
        exit(0); 
    }
    
    printHubby();
    for(size_t i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-w") == 0 || strcmp(argv[i], "--word") == 0) {
            printWord(argv[++i]); 
            continue;
        }
        else {
            printf("print failure!");
            help();
            exit(-1);
        }
    }

    return 0;
}
