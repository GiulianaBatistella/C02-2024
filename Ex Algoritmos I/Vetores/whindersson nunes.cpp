#include <iostream>

using namespace std;

int main()
{
    int i; // contador
    int videos; // quantidade de videos a serem analisados
    int views[10]; // vetor para a quantidade de views de cada video 
    int maior = 0; // quantdade de videos com > 10M de views
    int menor = 0; // quantdade de videos com < 10M de views
    
    cin >> videos;
    
    for (i = 0; i < videos; i++)
    {
        cin >> views[i];
        
        if(views[i] >= 10000000)
            maior++;
            
        else if(views[i] < 10000000)
            menor++;
    }
    
    cout << maior << " video(s) com mais de 10M views" << endl;
    cout << menor << " video(s) com menos de 10M views" << endl;
    
    return 0;
}