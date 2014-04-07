#include <iostream>

#include "Clientes.h"
#include "Cliente.h"

using std::cout;

// Metódo para inserir um novo crédito na lista
	void Clientes::inserir(float s, float l) {
		Cliente * novo = new Cliente(s, l);
        if (head == NULL)
            head = novo;
        else {
            Cliente * onde = head;
            while (onde->getNext())
                onde = onde->getNext();
            onde->setNext(novo);
        }
	}
// Método para imprimir, na saída padrão, todos os clientes
    void Clientes::listarClientes() const {
        Cliente * temp = head;
        cout << "Os clientes são:\n";
        while (temp) {
            cout << "\tCliente " << temp->getConta() << ".\n";
            temp = temp->getNext();
        }
        cout << "\n";
    }
