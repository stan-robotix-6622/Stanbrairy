# Stanbrairy ![star](https://img.shields.io/github/stars/stan-robotix-6622/Stanbrairy)
Librairie utilisée par Stan Robotix 6622 pour leurs robots FRC

## Comment utiliser
1. Ajouter le dépôt en tant que sous-module grâce à la commande git `git submodule add https://github.com/stan-robotix-6622/Stanbrairy` **suivi du chemin vers l'endroit où le sous-module devrait être créé :** `(projet/)src/stanbrairy`
2. Modifier le `build.gradle` du projet pour inclure la nouvelle source de code :
    1. Trouver la section `sources.cpp`
    2. Ajouter `src/stanbrairy/cpp` à la sous-section `source`
    3. Ajouter `src/stanbrairy/include` à la sous-section `exportedHeaders`
    4. Rafraîchir Intellisense pour appliquer les changements avec la commande suivante :
    ```
    ./gradlew generateVSCodeConfig
    ```
3. Vous pouvez maintenant utiliser les ressources de Stanbrairy avec `#include "stanbrairy/..."`

## Cloner un dépôt avec Stanbrairy
Pour cloner un dépôt utilisant Stanbrairy, veuillez faire l'un des suivants :
- Joindre `--recurse-submodules` à la commande `git clone`
- Exécuter la commande git suivante après avoir cloné le dépôt :
```
git submodule update --init --recursive
```
