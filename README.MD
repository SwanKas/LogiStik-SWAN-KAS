# EVALUATION LOGISTIK

## Qu'est-ce que c'est?

Architecture du projet pour l'�valuation de C++, niveau B3, autour des templates collections de la STL.

**ATTENTION!!! Pensez bien � modifier le d�p�t en ligne pour pointer vers le votre!!**

## Modification de origin dans Visual Studio

Dans le menu, allez dans `Git` / `G�reer les d�p�ts distant...`

Dans la fen�tre, modifiez `origin` pour mettre dans `R�cup�rer` l'url de **votre** d�p�t Gitlab.

## Vos messages de commits obligatoires

Ins�rez ci-dessous une cpoie des messages de commit obligatoires, en sautant 1 ligne entre chaque message... 

Pensez � utiliser �galement des messages clairs lors de vos propres commits! 



REPONSE QUESTIONNAIRE:

createdCommands
Une liste chaînée (std::list) est utilisée pour ajouter et retirer rapidement les commandes en FIFO.

preparedCommands
Même logique avec une liste chaînée pour préparer les commandes dans l'ordre FIFO.

truck_A et truck_B
Une pile (std::stack) est idéale pour le chargement des camions, suivant une logique LIFO.

delivredCommands
Une table de hachage (std::unordered_map) permet un accès rapide aux commandes livrées par numéro.
