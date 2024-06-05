#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Dados pra cadastramento de livro
struct dados
{
    string titulo;
    string autor;
    string edicao;
    string genero;
    string sinopse;
};

int main()
{
    dados cad_livro[1000];
    ofstream arqout; // var para escrita no arquivo
    ifstream arqin; // var de leitura do arquivo
    string nomearq = "biblioteca.txt"; // nome do arquivo
    bool continua = true, running = true; // flag da repetição principal
    string busca;
    int answer, x, op; // seleção de opção
    int i=0, j=0; // contador

    cout << "Bem-vindos ao Imersos, como posso ajudar?" << endl;

    // Permite a volta pro "menu principal" (ex: quando terminado o cadastro, é possivel voltar pro menu) 
    while(continua)
    {
        cout << endl << "1. Cadastrar livro" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Pesquisar" << endl;
        cout << endl << "Selecione uma opcao: ";
        cin >> answer;

        // Começa a operação da opção selecionada (1, 2 ou 3)
        switch(answer)
        {
            case 1: // Cadastramento do livro

                // Repetição do cadastramento caso seja desejado
                while(running)
                {   
					arqout.open(nomearq.c_str(), ofstream::out);

                    cout << endl << "Titulo: " << endl;
                    getline(cin >> ws, cad_livro[i].titulo);

                    cout << "Autor: " << endl;
                    getline(cin >> ws, cad_livro[i].autor);

                    cout << "Edicao: " << endl;
                    getline(cin >> ws, cad_livro[i].edicao);

                    cout << "Genero: " << endl;
                    getline(cin >> ws, cad_livro[i].genero);

                    cout << "Sinopse: " << endl;
                    getline(cin >> ws, cad_livro[i].sinopse);
                    i++;

                    arqout.close();

                    cout << "Deseja cadastrar mais um livro? (1- sim / 2- nao) " << endl;

                    // Controla as respostas válidas, caso não seja 1 ou 2 aparecerá uma mensagem
                    do
                    {
                        cin >> x;
                        if(x!=1 && x!=2)
                            cout << "Opção invalida, tente novamente: ";  
                    }while(x!=1 && x!=2);
                    
                    // Repete as informaçãos paar um novo cadastro ou sai pro menu principal
                    switch(x)
                    {
                        case 1:
                            running = true;
                        break;

                        case 2:
                            running = false;
                        break;
                    }
                }

            break;

            case 2: // Mostrar inventário
                i=0;
                // Abrindo arquivo pra leitura
                arqin.open(nomearq.c_str(), ifstream::in);

                // Lendo dados do arquivo
                while(!arqin.eof())
                {
                    getline(arqin >> ws, cad_livro[i].titulo);
                    i++;
                }
                
                cout << "Total de livros: " << i << endl;

                i=0;

                while(!arqin.eof())
                {
                    getline(arqin >> ws, cad_livro[i].titulo);
                    cout << endl << "Titulo: " << cad_livro[i].titulo << endl;
                    getline(arqin >> ws, cad_livro[i].autor);
                    cout << "Autor: " << cad_livro[i].autor << endl;
                    getline(arqin >> ws, cad_livro[i].edicao);
                    cout << "Edicao: " << cad_livro[i].edicao << endl;
                    getline(arqin >> ws, cad_livro[i].genero);
                    cout << "Genero: " << cad_livro[i].genero << endl;
                    getline(arqin >> ws, cad_livro[i].sinopse);
                    cout << "Sinopse: " << cad_livro[i].sinopse << endl;
                    i++;
                }

                // Fechando arquivo
                arqin.close();
            break;

            case 3: // Pesquisar (por Titulo, Autor ou Genero)
                cin >> op;
                
                i=0;

                getline(cin >> ws, busca);

                switch(op)
                {
                    case 1:
                        arqin.open(nomearq.c_str(), ifstream::in);

                        while(!arqin.eof())
                        {
                            getline(arqin >> ws, cad_livro[i].titulo);

                            if(busca == cad_livro[i].titulo)
                            {
                                getline(arqin >> ws, cad_livro[i].titulo);
                                cout << endl << "Titulo: " << cad_livro[i].titulo << endl;
                                getline(arqin >> ws, cad_livro[i].autor);
                                cout << "Autor: " << cad_livro[i].autor << endl;
                                getline(arqin >> ws, cad_livro[i].edicao);
                                cout << "Edicao: " << cad_livro[i].edicao << endl;
                                getline(arqin >> ws, cad_livro[i].genero);
                                cout << "Genero: " << cad_livro[i].genero << endl;
                                getline(arqin >> ws, cad_livro[i].sinopse);
                                cout << "Sinopse: " << cad_livro[i].sinopse << endl;
                            }

                            i++;
                        }

                        arqin.close();
                    break;

                    case 2:
                        arqin.open(nomearq.c_str(), ifstream::in);

                        while(!arqin.eof())
                        {
                            getline(arqin >> ws, cad_livro[i].autor);

                            if(busca == cad_livro[i].autor)
                            {
                                getline(arqin >> ws, cad_livro[i].titulo);
                                cout << endl << "Titulo: " << cad_livro[i].titulo << endl;
                                getline(arqin >> ws, cad_livro[i].autor);
                                cout << "Autor: " << cad_livro[i].autor << endl;
                                getline(arqin >> ws, cad_livro[i].edicao);
                                cout << "Edicao: " << cad_livro[i].edicao << endl;
                                getline(arqin >> ws, cad_livro[i].genero);
                                cout << "Genero: " << cad_livro[i].genero << endl;
                                getline(arqin >> ws, cad_livro[i].sinopse);
                                cout << "Sinopse: " << cad_livro[i].sinopse << endl;
                            }

                            i++;
                        }

                        arqin.close();
                    break;

                    case 3:
                        arqin.open(nomearq.c_str(), ifstream::in);

                        while(!arqin.eof())
                        {
                            getline(arqin >> ws, cad_livro[i].genero);

                            if(busca == cad_livro[i].genero)
                            {
                                getline(arqin >> ws, cad_livro[i].titulo);
                                cout << endl << "Titulo: " << cad_livro[i].titulo << endl;
                                getline(arqin >> ws, cad_livro[i].autor);
                                cout << "Autor: " << cad_livro[i].autor << endl;
                                getline(arqin >> ws, cad_livro[i].edicao);
                                cout << "Edicao: " << cad_livro[i].edicao << endl;
                                getline(arqin >> ws, cad_livro[i].genero);
                                cout << "Genero: " << cad_livro[i].genero << endl;
                                getline(arqin >> ws, cad_livro[i].sinopse);
                                cout << "Sinopse: " << cad_livro[i].sinopse << endl;
                            }

                            i++;
                        }

                        arqin.close();
                    break;
                }
            break;

            case 4:
                continua = false;
            break;

        }
    }

    return 0;
}
