#include <iostream>
#include<string.h>

using namespace std;

#define TAM 20
int numerodeletras(char* nnome)
{
    int i=0,j;
    while(nnome[i] != '\0' )
    {
        i++;
        j=i;
    }
    return j;
}
void invertenome (char* name,int nnum)
{
    for(int i=nnum; i>=0; i--)
    {
        cout<< name[i];
    }
}
int main()
{

    char nome[TAM];
    int num;

    cout << "Digite seu nome: ";
    cin>>nome;

    num = numerodeletras(nome);
    invertenome(nome,num);

    return 0;
}
