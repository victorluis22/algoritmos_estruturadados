#include <iostream>

using namespace std;

class Venda {
	private:
		int npecas;
		float preco;
	public:
		void getvenda() {
			cout << "\nInsira o No. de pecas: ";
			cin >> npecas;
			
			cout << "\nInsira o preco: ";
			cin >> preco;
		}
		void printvenda() {
			cout << "\nNo. de pecas: " << npecas;
			cout << "\nPreco: " << preco;
		}
};

int main() {
	Venda A;
	A.getvenda();
	A.printvenda();
	
	// Objeto sem nome apontado pelo ponteiro B
	Venda *B;
	B = new Venda;
	B -> getvenda();
	B -> printvenda();
	
	return 0;
}
