# base

ajouter `malloc_bis.c` aux fichiers sources du projet

à ajouter au header du projet :
```
void	*malloc_bis(size_t n);
#define malloc(n) malloc_bis(n)
```

flags de compilation :
```
-g -fsanitize=address -D N=1000
```
et avec un makefile :
```
-g -fsanitize=address -D N=$N
```

# pour tester tous les malloc

ajouter `test_all_malloc.sh` au projet et lancer le script

comme on compile avec fsanitize, tant que le script naffiche pas derreur ca veut dire quil ny a pas de fuite memoire
