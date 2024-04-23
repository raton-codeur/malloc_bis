
FLAGS = -g -fsanitize=address -D N=$N

all :
	cc -I. -Ilibft $(FLAGS) *.c libft/libft.a
