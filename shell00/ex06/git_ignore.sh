#!/bin/sh

#CD al directorio raiz de git
cd "$(git rev-parse --show-toplevel)"
#Muestra archivos ignorados que esten en local y en lista .gitignore
git ls-files --others --ignored --exclude-standard
