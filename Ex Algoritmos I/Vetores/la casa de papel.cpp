#include <iostream>

using namespace std;

int main()
{
    int opinion[10];
    int N, i, like_dislike=0;
    int like=0, dislike=0, media;
    
    cin >> N;

    while(N<0 || N>1000)
        cin >> N;
    
    for(i=0; i<N; i++)
    {
        cin >> like_dislike;

        if(like_dislike>0)
            like++;

        else
            dislike++;
    }

    media=N/2;

    if(like>media)
        cout << endl << "A maioria gostou";
        
    else if(dislike>media)
        cout << endl << "A maioria nao gostou";

    else 
        cout << endl << "Deu empate";
        
    return 0;
}
