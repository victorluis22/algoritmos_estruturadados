#include <iostream>
#include <iomanip>

using namespace std;

class venda {
	private:
		int npecas;
		float preco;
	public:
		venda() {	}
		venda(int np, float p) {
			npecas = np;
			preco = p;
		}
		void getvenda() {
			cout << "Insira No.Pecas: ";
			cin >> npecas;
			cout << "Insira Preco: ";
			cin >> preco;
		}
		void printvenda() const;
		
		venda add_venda(venda v) const {
			venda temp; // Vari�vel temporaria
			temp.npecas = npecas + v.npecas;
			temp.preco = preco + v.preco;
			return temp;
		}
};

// Forma de declarar fun��es-membros fora da classe
void venda::printvenda() const {
	cout << 
	setiosflags(ios::fixed) << // Sem nota��o cient�fica
	setiosflags(ios::showpoint) << // Mostrar ponto decimal
	setprecision(2) << // Mostrar duas casas decimais
	setw(10) << // Quantidade de espa�os em branco
	npecas;
	
	cout << setw(10) << preco << endl;
}

int main() {
	venda a(58, 12734.53), b, total;
	
	b.getvenda();
	total = a.add_venda(b);
	
	cout << "Venda A....";
	a.printvenda();
	
	cout << "Venda B....";
	b.printvenda();
	
	cout << "Totais....";
	total.printvenda();
	return 0;
}
