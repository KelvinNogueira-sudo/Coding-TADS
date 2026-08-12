//  ========================
//  = FUNÇÕES PARA VETORES =
//  ========================

//Insere números no vetor a partir de um tamanho
TEMPLATE
void insertVector(vector<T>& v, int t) {
    T valor;
    v.resize(t);
    for (int i = 0; i < t; ++i) {
        cin >> valor;
        v[i] = valor;
    }
}

//Imprime um vetor
TEMPLATE
void printVector(vector<T> v) {
    auto t = v.size();
    for (unsigned short i = 0; i < t; i++) {
        cout << v[i] << " ";
    }
}

//  =========================
//  = FUNÇÕES PARA MATRIZES =
//  =========================

//Criar Matriz
TEMPLATE
vector<vector<T>> makeMatrix(int l, int c) { //Ordenamento (Linhas x Colunas)
    vector<vector<T>> matriz(l, vector<T>(c));
    int i = 0, j = 0; //Variaveis de controle

    while(i < l) {
        while(j < c) {
            cin >> matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return matriz;
}

//Imprime Matriz
TEMPLATE
void printMatrix(vector<vector<T>>& matriz) {
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0; //Variaveis de controle

    while(i < l) {
        while(j < c) {
            cout << matriz[i][j];
            if(j < c - 1) cout << " "; // Cria um espaço entre as colunas
            j++;
        }
        cout << '\n';
        j = 0;
        i++;
    }
}

//Acha a Linha de um Número X na Matriz
TEMPLATE
int findLMatrix(vector<vector<T>>& matriz, T x) {
    bool found = false;
    int i = 0, j = 0;
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas

    while(i < l) {
        while(j < c) {
            if(matriz[i][j] == x) {
                found = true;
                break;
            }
            j++;
        }
        if (found) break;
        j = 0;
        i++;
    }
    if (!found) return -1;
    return i; //Retorna o índice
}

//Acha a Coluna de um Número X na Matriz
TEMPLATE
int findCMatrix(vector<vector<T>>& matriz, T x) {
    bool found = false;
    int i = 0, j = 0;
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas

    while(i < l) {
        while(j < c) {
            if(matriz[i][j] == x) {
                found = true;
                break;
            }
            j++;
        }
        if (found) break;
        j = 0;
        i++;
    }
    if (!found) return -1;
    return j; //Retorna o índice
}

//Achar Menor Valor na Matriz
TEMPLATE
T minMatrix(vector<vector<T>>& matriz) {
    T menor = matriz[0][0];
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0;

    while(i < l) {
        while(j < c) {
            if(menor > matriz[i][j]) menor = matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return menor;
}

//Achar Maior Valor na Matriz
TEMPLATE
T maxMatrix(vector<vector<T>>& matriz) {
    T maior = matriz[0][0];
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0;

    while(i < l) {
        while(j < c) {
            if(maior < matriz[i][j]) maior = matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return maior;
}

//Soma da Diagonal Principal
TEMPLATE
T somaPri(vector<vector<T>>& matriz) {
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0, somaP = 0;

    while(i < l) {
        while(j < c) {
            if(i == j) somaP += matriz[i][j];
            j++;
        }
        j = 0;
        i++;
    }
    return somaP;
}

//Soma da Diagonal Secundária
TEMPLATE
T somaSec(vector<vector<T>>& matriz) {
    int l = matriz.size(); //Quantas linhas
    int c = matriz[0].size(); //Quantas colunas
    int i = 0, j = 0, somaS = 0, backC = c - 1;

    while(i < l) {
        while(j < c) {
            if(j == backC) somaS += matriz[i][j];
            j++;
        }
        j = 0;
        backC--;
        i++;
    }
    return somaS;
}