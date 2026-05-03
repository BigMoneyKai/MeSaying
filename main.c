#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const char comma[6][30] = {
    "   ",
    "   ",
    "   ",
    "   ",
    "🀫🀫 ",
    "🀫  ",
};

const char exclaim[6][30] = {
    "  🀫  ",
    " 🀫🀫🀫 ",
    " 🀫🀫🀫 ",
    "  🀫  ",
    "     ",
    "  🀫  ",
};

const char period[6][30] = {
    "   ",
    "   ",
    "   ",
    "   ",
    "🀫🀫 ",
    "🀫🀫 ",
};

const char space[6][30] = {
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
    "  ",
};

const char a[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫  🀫  ",
    " 🀫🀫 🀫 ",
    "      ",
};

const char b[6][30] = {
    "🀫     ",
    "🀫     ",
    "🀫🀫🀫   ",
    "🀫  🀫  ",
    " 🀫🀫   ",
    "      ",
};

const char c[6][30] = {
    "      ",
    " 🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫     ",
    " 🀫🀫🀫🀫 ",
    "      ",
};

const char d[6][30] = {
    "    🀫 ",
    "    🀫 ",
    " 🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "      ",
};

const char e[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫  🀫🀫 ",
    "🀫 🀫   ",
    " 🀫🀫🀫  ",
    "      ",
};

const char f[6][30] = {
    "  🀫🀫 ",
    " 🀫   ",
    "🀫🀫🀫🀫 ",
    " 🀫   ",
    " 🀫   ",
    "     ",
};

const char g[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "    🀫 ",
    " 🀫🀫🀫  ",
};

const char h[6][30] = {
    "🀫    ",
    "🀫    ",
    "🀫🀫🀫  ",
    "🀫  🀫 ",
    "🀫  🀫 ",
    "     ",
};

const char i[6][30] = {
    " 🀫  ",
    "    ",
    "🀫🀫  ",
    " 🀫  ",
    "🀫🀫🀫 ",
    "    ",
};

const char j[6][30] = {
    "    🀫 ",
    "      ",
    "   🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char k[6][30] = { 
    "🀫    ",
    "🀫    ",
    "🀫 🀫🀫 ",
    "🀫🀫🀫  ",
    "🀫  🀫 ",
    "     ",
};

const char l[6][30] = {
    " 🀫   ",
    "🀫🀫   ",
    " 🀫   ",
    " 🀫   ",
    "  🀫🀫 ",
    "     ",
};

const char m[6][30] = {
    "      ",
    " 🀫 🀫  ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char n[6][30] = {
    "      ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char o[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char p[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫     ",
    "🀫     ",
};

const char q[6][30] = {
    "      ",
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    " 🀫🀫🀫🀫 ",
    "    🀫 ",
    "    🀫 ",
};

const char r[6][30] = {
    "     ",
    " 🀫🀫🀫 ",
    "🀫    ",
    "🀫    ",
    "🀫    ",
    "     ",
};

const char s[6][30] = {
    "      ",
    "  🀫🀫🀫 ",
    " 🀫🀫   ",
    "  🀫🀫  ",
    "🀫🀫🀫   ",
    "      ",
};

const char t[6][30] = {
    "  🀫   ",
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "   🀫🀫 ",
    "      ",
};

const char u[6][30] = {
    "      ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char v[6][30] = {
    "      ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "      ",
};

const char w[6][30] = {
    "      ",
    "🀫   🀫 ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    " 🀫 🀫  ",
    "      ",
};

const char x[6][30] = {
    "        ",
    " 🀫🀫  🀫🀫 ",
    "🀫  🀫 🀫  ",
    "   🀫🀫   ",
    " 🀫🀫  🀫🀫 ",
    "        ",
};

const char y[6][30] = {
    "      ",
    " 🀫  🀫 ",
    "🀫🀫  🀫 ",
    "  🀫🀫🀫 ",
    "    🀫 ",
    "  🀫🀫  ",
};

const char z[6][30] = {
    "     ",
    "🀫🀫🀫🀫 ",
    "  🀫  ",
    " 🀫   ",
    "🀫🀫🀫🀫 ",
    "     ",
};


const char A[6][30] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char B[6][30] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char C[6][30] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫     ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char D[6][30] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char E[6][30] = {
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char F[6][30] = {
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "🀫     ",
    "🀫     ",
    "      ",
};

const char G[6][30] = {
    " 🀫🀫🀫  ",
    "🀫     ",
    "🀫 🀫🀫🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char H[6][30] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char I[6][30] = {
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char J[6][30] = {
    "  🀫🀫🀫 ",
    "    🀫 ",
    "    🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char K[6][30] = { 
    "🀫   🀫 ",
    "🀫  🀫  ",
    "🀫🀫🀫   ",
    "🀫  🀫  ",
    "🀫   🀫 ",
    "      ",
};

const char L[6][30] = {
    "🀫     ",
    "🀫     ",
    "🀫     ",
    "🀫     ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char M[6][30] = {
    "🀫   🀫 ",
    "🀫🀫 🀫🀫 ",
    "🀫 🀫 🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char N[6][30] = {
    "🀫   🀫 ",
    "🀫🀫  🀫 ",
    "🀫 🀫 🀫 ",
    "🀫  🀫🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char O[6][30] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char P[6][30] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫     ",
    "🀫     ",
    "      ",
};

const char Q[6][30] = {
    " 🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫 🀫🀫  ",
    " 🀫🀫 🀫 ",
    "      ",
};

const char R[6][30] = {
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫🀫🀫🀫  ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "      ",
};

const char S[6][30] = {
    " 🀫🀫🀫🀫 ",
    "🀫     ",
    " 🀫🀫🀫  ",
    "    🀫 ",
    "🀫🀫🀫🀫  ",
    "      ",
};

const char T[6][30] = {
    "🀫🀫🀫🀫🀫 ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "  🀫   ",
    "      ",
};

const char U[6][30] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫🀫🀫  ",
    "      ",
};

const char V[6][30] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "      ",
};

const char W[6][30] = {
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    "🀫 🀫 🀫 ",
    " 🀫 🀫  ",
    " 🀫 🀫  ",
    "      ",
};

const char X[6][30] = {
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    " 🀫 🀫  ",
    "🀫   🀫 ",
    "      ",
};

const char Y[6][30] = {
    "🀫   🀫 ",
    "🀫   🀫 ",
    " 🀫 🀫  ",
    "  🀫   ",
    "  🀫   ",
    "      ",
};

const char Z[6][30] = {
    "🀫🀫🀫🀫🀫 ",
    "   🀫  ",
    "  🀫   ",
    " 🀫    ",
    "🀫🀫🀫🀫🀫 ",
    "      ",
};

const char (*lower_letter_map[26])[30] = {
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

const char (*upper_letter_map[26])[30] = {
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
    printf("  /  /   \\\n");
    printf("/ / \\/\\ / \\/\\\\\n");
    printf("|/|  (0)v (0) |\\|\n");
    printf("  |    [     |  /\n");
    printf("    [    3 ]    --\n");
    printf("                \\\n");
}

static void printWord(const char* word) {
    for(size_t i = 0; i < 6; i++) {
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
        printf("\n");
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
