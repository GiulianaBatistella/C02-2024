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
    string busca; // pesquisa (titulo, autor genero)
    int answer, x, op; // seleção de opção
    int i=0; // contador

    cout << "Bem-vindos ao Imersos, como posso ajudar?" << endl;

    // Permite a volta pro "menu principal" (ex: quando terminado o cadastro, é possivel voltar pro menu) 
    while(continua)
    {
        cout << endl << "1. Cadastrar livro" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Pesquisar" << endl;
        cout << "4. Sair do sistema" << endl;
        cout << endl << "Selecione uma opcao: ";
        cin >> answer;

        // Começa a operação da opção selecionada (1, 2 ou 3)
        switch(answer)
        {
            // Cadastramento do livro
            case 1: 

                // Repetição do cadastramento caso seja desejado
                while(running)
                {   
					arqout.open(nomearq.c_str(), ofstream::out);

                    cout << endl << "Titulo: ";
                    getline(cin >> ws, cad_livro[i].titulo);

                    cout << "Autor: ";
                    getline(cin >> ws, cad_livro[i].autor);

                    cout << "Edicao: ";
                    getline(cin >> ws, cad_livro[i].edicao);

                    cout << "Genero: ";
                    getline(cin >> ws, cad_livro[i].genero);

                    cout << "Sinopse: ";
                    getline(cin >> ws, cad_livro[i].sinopse);
                    i++; /* -> Percorre as linhas, caso não tivesse o 'i++' i seria so igual a zero, 
                    logo so ia percorrer cad_livro[i].titulo, com o i++ ele percorre os outros
                    cad_livro */
                    arqout.close();

                    running = false;
                }

            break;

            // Mostrar inventário
            case 2: 
                i=0; // zera o 'i' por conta do 'i++' mais acima

                // Abrindo arquivo pra leitura
                arqin.open(nomearq.c_str(), ifstream::in);

                // Leitura e contagem da quantidade de 'titulos' cadastrados
                while(!arqin.eof())
                {
                    getline(arqin >> ws, cad_livro[i].titulo);
                    i++; 
                }
                
                cout << "Total de livros: " << i << endl;

                i=0;

                // Leitura do arquivo
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
                    i++; // percorre as linhas
                }

                // Fechando arquivo
                arqin.close();
            break;

            // Pesquisa (Titulo, Autor, Genero)
            case 3: 

                cout << endl << "Selecione o tipo de pesquisa: (1- Titulo / 2- Autor / 3- Genero)" << endl;
                cin >> op;
                
                i=0;

                cout << endl << "Busca: ";
                getline(cin >> ws, busca);

                // Separa a pesquisa por tipo
                switch(op)
                {
                    // Pesquisa por Titulo
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

                    // Pesquisa por Autor
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

                    // Pesquisa por Genero
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
