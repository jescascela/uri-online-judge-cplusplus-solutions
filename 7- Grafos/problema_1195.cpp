#include <iostream>

using namespace std;

class Arvore
{
    private:
        int info;
        Arvore* dir;
        Arvore* esq;
    
    public:
        Arvore* cria()
        {
            return NULL;
        };

        Arvore* inserir(Arvore* arv, int v)
        {
            if(arv == NULL)
            {
                arv = new Arvore;
                arv->dir = NULL;
                arv->esq = NULL;
                arv->info = v;

                return arv;
            }

            if(v < arv->info)
            {
                arv->esq = inserir(arv->esq, v);
            }
            else
            {
                arv->dir = inserir(arv->dir, v);
            }

            return arv;   
        };

        void imprimePre(Arvore* arv)
        {
            if(arv != NULL)
            {
                cout << " " << arv->info;
                imprimePre(arv->esq);
                imprimePre(arv->dir); 
            }
        }

        void imprimeIn(Arvore* arv)
        {
            if(arv != NULL)
            {
                imprimeIn(arv->esq);
                cout << " " << arv->info;
                imprimeIn(arv->dir);
            }
        }

        void imprimePost(Arvore* arv)
        {
            if(arv != NULL)
            {
                imprimePost(arv->esq);
                imprimePost(arv->dir);
                cout << " " << arv->info;
            }
        }
};

int main()
{
    Arvore* arv;
    int c;
    int n;
    int v;

    cin >> c;

    for(int i = 0; i < c; i++)
    {
        cin >> n;
        arv = NULL;

        for(int j = 0; j < n; j++)
        {
            cin >> v;
            arv = arv->inserir(arv, v);
        }

        cout << "Case " << i + 1 << ":" << endl;
        cout << "Pre.:"; 
        arv->imprimePre(arv);
        cout << endl;
        cout << "In..:";
        arv->imprimeIn(arv);
        cout << endl;
        cout << "Post:";
        arv->imprimePost(arv);
        cout << "\n\n";
    }

    return 0;
}