#include "pch.h"
#include "Commande.h"

using namespace std;

Commande::Commande(const unsigned int numero, const std::string contenu)
{
	this->numero = numero;
	this->contenu = contenu;
	this->dateCreation = std::chrono::system_clock::now();
}

void Commande::Preparer()
{
	this->datePreparation = std::chrono::system_clock::now();
}

void Commande::Expedier()
{
	this->dateExpedition = std::chrono::system_clock::now();
}

void Commande::Livrer()
{
	this->dateLivraison = std::chrono::system_clock::now();
}

tm Commande::GetDateTm(const tp& date) const
{
	time_t ttDate = std::chrono::system_clock::to_time_t(date);
	tm local_tm;
	localtime_s(&local_tm, &ttDate);

	return local_tm;
}

DllExport std::ostream& operator<<(std::ostream& os, const Commande& src)
{
	tm local_tm = src.GetDateTm(src.GetDateCreation());

	os << src.GetNumero() << ";" << src.GetContenu() << ";";
	if (local_tm.tm_year != 70)
		os << local_tm.tm_year + 1900 << "-" << local_tm.tm_mon + 1 << "-" << local_tm.tm_mday << " " << local_tm.tm_hour << ":" << local_tm.tm_min << ":" << local_tm.tm_sec << ";";

	local_tm = src.GetDateTm(src.GetDatePreparation());
	if(local_tm.tm_year != 70)
		os << local_tm.tm_year + 1900 << "-" << local_tm.tm_mon + 1 << "-" << local_tm.tm_mday << " " << local_tm.tm_hour << ":" << local_tm.tm_min << ":" << local_tm.tm_sec << ";";

	local_tm = src.GetDateTm(src.GetDateExpedition());
	if (local_tm.tm_year != 70)
		os << local_tm.tm_year + 1900 << "-" << local_tm.tm_mon + 1 << "-" << local_tm.tm_mday << " " << local_tm.tm_hour << ":" << local_tm.tm_min << ":" << local_tm.tm_sec << ";";

	local_tm = src.GetDateTm(src.GetDateLivraison());
	if (local_tm.tm_year != 70)
		os << local_tm.tm_year + 1900 << "-" << local_tm.tm_mon + 1 << "-" << local_tm.tm_mday << " " << local_tm.tm_hour << ":" << local_tm.tm_min << ":" << local_tm.tm_sec << ";";

	return os;
}
