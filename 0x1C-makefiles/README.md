Show me how to use and work makefiles in C programming
0X1B.c

CC = gcc
SRC = main.c school.c
OBJ = $(SRC:%.c=%.o)
NAME = school
RM = rm

# Construction de l'exécutable
all: $(NAME)

# $(NAME): La cible qui est ici l'exécutable. Nous définissons les règles ou dépendances avec les fichiers de sortie.
# Ensuite, nous affichons la commande d'exécution du programme. $^ permet de récupérer les éléments de la variable OBJ
# et $@ représente dans ce cas l'exécutable.
$(NAME): $(OBJ)
    @echo $(CC) $^ -o $@
    $(CC) $^ -o $@

# Nous montrons maintenant comment les fichiers objets sont générés, car c'est cela qui permet à l'exécutable de fonctionner.
# Pour cela, nous utilisons l'option -c qui spécifie la compilation, -o $@ qui spécifie le nom du fichier de sortie (l'objet),
# et $< qui représente le fichier source correspondant.
%.o: %.c
    @echo $(CC) -c -o $@ $<
clean:
    @echo "Cleaning..."
    $(RM) *.swp       # Supprime tous les fichiers .swp (temporaires de Vim)
    $(RM) *.swo       # Supprime tous les fichiers .swo (temporaires de Vim)
    $(RM) *.swx       # Supprime tous les fichiers .swx (temporaires de Vim)
    $(RM) $(NAME)     # Supprime l'exécutable
re: clean all
Lorsque vous exécutez la règle re, elle va d'abord exécuter la règle clean, qui supprime tous les fichiers temporaires et l'exécutable. Ensuite, elle exécute la règle all, qui reconstruit l'exécutable en compilant tous les fichiers source, même s'ils n'ont pas été modifiés.

Ainsi, en exécutant la règle re, vous forcez la recompilation complète de votre projet.
