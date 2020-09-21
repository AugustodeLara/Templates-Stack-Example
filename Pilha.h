#ifndef PILHA_H
#define PILHA_H


template<class T>
class Pilha
{
public:
	Pilha(int = 5);
	~Pilha()
	{
		delete[] pilhaP;
	};

	//insere na planilha
	bool InsereP(const T&);


private:
	int posicaoTop;
	int tamanho;
	T *pilhaP;

	bool VaziaP() const
	{
		return posicaoTop == -1;
	}

	bool CheiaP() const
	{
		return posicaoTop == tamanho - 1;
	}
};

//construtor default
template<class T>
Pilha<T>::Pilha(int tam)
{
	tamanho = tam > 0 ? tam : 5;
	posicaoTop = -1;
	pilhaP = new T[tamanho];
}

//insere
template<class T>
bool Pilha<T>::InsereP(const T &ValorIn)
{
	if (!CheiaP())
	{
		pilhaP[++posicaoTop] = ValorIn;
		return true;
	}
	return false;
}
#endif // PILHA_H