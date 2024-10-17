#pragma once
#define DllExport   __declspec( dllexport )
#define DllImport   __declspec( dllimport )

#include <ostream>
#include <chrono>

using tp = std::chrono::system_clock::time_point;

 class DllExport Commande
{
private:
	unsigned int numero;
	tp dateCreation;
	tp datePreparation;
	tp dateExpedition;
	tp dateLivraison;
	std::string contenu;

public:
	Commande(const unsigned int numero, const std::string contenu);
	void Preparer();
	void Expedier();
	void Livrer();
	unsigned int GetNumero() const { return this->numero; }
	unsigned int GetNumero() { return this->numero; }
	tp GetDateCreation() const { return this->dateCreation; }
	tp GetDateCreation() { return this->dateCreation; }
	tp GetDatePreparation() const { return this->datePreparation; }
	tp GetDatePreparation() { return this->datePreparation; }
	tp GetDateExpedition() const { return this->dateExpedition; }
	tp GetDateExpedition() { return this->dateExpedition; }
	tp GetDateLivraison() const { return this->dateLivraison; }
	tp GetDateLivraison() { return this->dateLivraison; }
	std::string GetContenu() const { return this->contenu; }
	std::string GetContenu() { return this->contenu; }
	tm GetDateTm(const tp& date) const;
};

DllExport std::ostream& operator <<(std::ostream& os, const Commande& source);

