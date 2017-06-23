#include <iostream>

#define TAM 8
using namespace std;

struct TreeNode
{
	TreeNode *Esq;
	TreeNode *Dir;
	int Info;
};

void Insere(TreeNode *Tree, int x){
	if (Tree == NULL) {

		Tree = new TreeNode;
		Tree->Info = x;
		Tree->Esq = NULL;
		Tree->Dir = NULL;
		cout<<"Inserido"<<endl;
		cout<<Tree->Info<<endl;

  	} else if (x < Tree->Info) {
    	Insere(Tree->Esq, x);
  	} else {
    	Insere(Tree->Dir, x);
  	}
}

void Exibe(TreeNode* Tree){
	if (Tree == NULL){
		cout<<"Nao ha elementos"<<endl;
	}else{ 
		//cout<<Tree->Info<<endl;

		if (Tree->Esq!=NULL and Tree->Dir!=NULL){
			Exibe(Tree->Esq);
			Exibe(Tree->Dir);
		}else if (Tree->Esq != NULL and Tree->Dir == NULL){
			Exibe(Tree->Esq);
		}else if (Tree->Esq == NULL and Tree->Dir != NULL){
			Exibe(Tree->Dir);
		}else if(Tree->Esq==NULL and Tree->Dir==NULL){
		}
	}
}

void inicializaTabuleiro(int matriz[][]){
	for (int i = 0; i < TAM; i++)
	{
		for (int j = 0; i < TAM; j++)
		{
			matriz[i][j]=0;
		}
	}
}

int main(){
	
	TreeNode *Raiz = new TreeNode;


	// Insere(Raiz,10);
	// Insere(Raiz,20);
	// cout<<Raiz->Info<<endl;
	//Insere(Raiz,30);
	//Exibe(Raiz);

	return 0;
}


