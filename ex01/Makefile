SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Polymorphism

all : $(NAME)

$(NAME):$(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -Rf $(NAME)

fclean:clean

re:fclean all