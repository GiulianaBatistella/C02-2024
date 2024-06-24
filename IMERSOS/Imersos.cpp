#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Estrutura de dados para cadastramento de livro
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
    ofstream arqout; // vari�vel para escrita no arquivo
    ifstream arqin;  // vari�vel para leitura do arquivo
    string nomearq = "biblioteca.txt"; // nome do arquivo
    bool continua = true; // flag da repeti��o principal
    string busca; // pesquisa (titulo, autor, genero)
    int answer, op; // sele��o de op��o
    int j = 0; // contador
    int livrostotais = 0; // quantidade total de livros
    int contadorLinha = 0; // aux para colocar as informa��es de forma ordenada no vetor
    string linha; // pega  informa��o do vetor e coloca na ordem correta

    // Abrindo arquivo para leitura
    arqin.open(nomearq.c_str(), ifstream::in);
    
    // Confere se o arquivo est� abrindo
    if (!arqin.is_open()) 
	{
        cout << "N�o foi poss�vel abrir o arquivo " << nomearq << endl;
        return 1;
    }

    // Continuar lendo o arquivo enquanto nao esta vazio
    while (getline(arqin >> ws, linha)) 
	{
        // Atribuir a linha lida ao campo correto da struct
        switch (contadorLinha) 
		{
            case 0:
                cad_livro[livrostotais].titulo = linha;
                break;
            case 1:
                cad_livro[livrostotais].autor = linha;
                break;
            case 2:
                cad_livro[livrostotais].edicao = linha;
                break;
            case 3:
                cad_livro[livrostotais].genero = linha;
                break;
            case 4:
                cad_livro[livrostotais].sinopse = linha;
                break;
        }

        // Incrementar o contador de linha
        contadorLinha++;

        // Se o contador de linha chegar a 5, significa que lemos todos os campos de uma struct
        if (contadorLinha == 5) 
		{
            contadorLinha = 0;
            livrostotais++; // Avan�a para o pr�ximo livro somente ap�s ler todas as 5 linhas
        }
    }
    // Fechando o arquivo
    arqin.close();
    
    //In�cio do c�digo
    cout << "Bem-vindos ao Imersos, como posso ajudar?" << endl;

    // Permite a volta pro "menu principal" (ex: quando terminado o cadastro, � possivel voltar pro menu)
    while (continua) 
	{
        cout << endl << "1. Cadastrar livro" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Pesquisar" << endl;
        cout << "4. Sair do sistema" << endl;
        cout << endl << "Selecione uma opcao: ";
        cin >> answer;

        // Come�a a opera��o selecionada (1, 2 ou 3)
        switch (answer) 
		{
            // Cadastramento do livro
            case 1: 
			{
				// Novas variaveis pra adicionar novas informa��es no arquivo
                string titulo, autor, edicao, genero, sinopse;

                arqout.open(nomearq.c_str(), ofstream::app); 

                cout << endl << "Titulo: ";
                getline(cin >> ws, titulo);
                cout << "Autor: ";
                getline(cin >> ws, autor);
                cout << "Edicao: ";
                getline(cin >> ws, edicao);
                cout << "Genero: ";
                getline(cin >> ws, genero);
                cout << "Sinopse: ";
                getline(cin >> ws, sinopse);

                arqout << titulo << endl;
                arqout << autor << endl;
                arqout << edicao << endl;
                arqout << genero << endl;
                arqout << sinopse << endl;

                arqout.close();

                // Atualiza a estrutura em mem�ria
                cad_livro[livrostotais].titulo = titulo;
                cad_livro[livrostotais].autor = autor;
                cad_livro[livrostotais].edicao = edicao;
                cad_livro[livrostotais].genero = genero;
                cad_livro[livrostotais].sinopse = sinopse;
                livrostotais++;

                break;
            }

            // Mostrar invent�rio
            case 2:
            	
                for (j = 0; j < livrostotais; j++) 
				{
                    cout << endl << "Titulo: " << cad_livro[j].titulo << endl;
                    cout << "Autor: " << cad_livro[j].autor << endl;
                    cout << "Edicao: " << cad_livro[j].edicao << endl;
                    cout << "Genero: " << cad_livro[j].genero << endl;
                    cout << "Sinopse: " << cad_livro[j].sinopse << endl;
                }
                cout << endl << "Quantidade total de livros: " << livrostotais << endl;
                
                break;
				
            // Pesquisa (T�tulo, Autor, G�nero)
            case 3:
                cout << endl << "Selecione o tipo de pesquisa: (1- Titulo / 2- Autor / 3- Genero)" << endl;
                cin >> op;

                cout << endl << "Busca: ";
                getline(cin >> ws, busca);

                switch (op) 
				{
                    // Pesquisa por T�tulo
                    case 1:
                        for (j = 0; j < livrostotais; j++) 
						{
                            if (busca == cad_livro[j].titulo) 
							{
                                cout << endl << "Titulo: " << cad_livro[j].titulo << endl;
                                cout << "Autor: " << cad_livro[j].autor << endl;
                                cout << "Edicao: " << cad_livro[j].edicao << endl;
                                cout << "Genero: " << cad_livro[j].genero << endl;
                                cout << "Sinopse: " << cad_livro[j].sinopse << endl;
                            }
                        }
                        break;

                    // Pesquisa por Autor
                    case 2:
                        for (j = 0; j < livrostotais; j++) 
						{
                            if (busca == cad_livro[j].autor) 
							{
                                cout << endl << "Titulo: " << cad_livro[j].titulo << endl;
                                cout << "Autor: " << cad_livro[j].autor << endl;
                                cout << "Edicao: " << cad_livro[j].edicao << endl;
                                cout << "Genero: " << cad_livro[j].genero << endl;
                                cout << "Sinopse: " << cad_livro[j].sinopse << endl;
                            }
                        }
                        break;

                    // Pesquisa por G�nero
                    case 3:
                        for (j = 0; j < livrostotais; j++) 
						{
                            if (busca == cad_livro[j].genero) 
							{
                                cout << endl << "Titulo: " << cad_livro[j].titulo << endl;
                                cout << "Autor: " << cad_livro[j].autor << endl;
                                cout << "Edicao: " << cad_livro[j].edicao << endl;
                                cout << "Genero: " << cad_livro[j].genero << endl;
                                cout << "Sinopse: " << cad_livro[j].sinopse << endl;
                            }
                        }
                        break;
                }
                break;

	            // Sair
	            case 4:
                	continua = false;
                break;
        }
    }

    return 0;
}