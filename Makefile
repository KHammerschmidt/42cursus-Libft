# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
COM_COLOR   := \033[0;34m
OBJ_COLOR   := \033[0;32m
ERROR_COLOR := \033[0;31m
WARN_COLOR  := \033[0;33m


# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME		:=	libft.a

CC			:=	gcc
CFLAGS		:=	-Wall -Werror -Wextra
DEPFLAGS	 =	-MMD -MF $(DDIR)$*.d

INCLUDES	:=	./header/

SDIR		:=	./src/
ODIR		:=	./obj/
DDIR		:=	$(ODIR)deps/

SRCS		:=	ft_calloc.c		ft_bzero.c		ft_memset.c			\
				ft_memcpy.c		ft_memmove.c	ft_memchr.c			\
				ft_memcmp.c		ft_itoa.c		ft_atoi.c			\
				ft_strmapi.c	ft_striteri.c	ft_toupper.c		\
				ft_tolower.c	ft_isalpha.c	ft_isdigit.c		\
				ft_isalnum.c	ft_isascii.c	ft_isprint.c		\
				ft_strlen.c		ft_strlcpy.c	ft_strlcat.c		\
				ft_strchr.c		ft_strrchr.c	ft_strnstr.c		\
				ft_strncmp.c	ft_strdup.c		ft_substr.c			\
				ft_strjoin.c	ft_strtrim.c	ft_free.c			\
				ft_split.c		ft_putstr_fd.c	ft_putendl_fd.c		\
				ft_putnbr_fd.c	ft_putchar_fd.c	ft_strnjoin.c		\

BONUS_SRCS	:=	ft_lstnew.c						ft_lstadd_back.c	\
				ft_lstadd_front.c				ft_lstclear.c		\
				ft_lstdelone.c					ft_lstiter.c		\
				ft_lstlast.c					ft_lstsize.c		\
				ft_lstnew_push_back.c

OBJS		:=	$(SRCS:%.c=$(ODIR)%.o)
BONUS_OBJS	:=	$(BONUS_SRCS:%.c=$(ODIR)%.o)
HEADERS		:=	$(INCLUDES)*.h
DEPS		:= 	$(SRCS:%.c=$(DDIR)%.d)

# **************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(ODIR) $(DDIR) $(OBJS) $(DEPS)
	@ar -crs $(NAME) $(OBJS)
	@echo "$(COM_COLOR)...creating: $(NAME)" 

$(ODIR)%.o: $(SDIR)%.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) $(DEPFLAGS) -c $< -o $@

$(ODIR):
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files"
	@mkdir -p $(ODIR)

$(DDIR):
	@echo "$(OBJ_COLOR)...creating dependency files"
	@mkdir -p $(DDIR)

bonus: $(ODIR) $(OBJS) $(BONUS_OBJS)
	@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
	@echo "$(OBJ_COLOR)...compiling $(NAME)-bonus-object-files"
	@echo "$(COM_COLOR)...creating: $(NAME)" 

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@rm -rf $(ODIR)
	@echo "$(ERROR_COLOR)...$(NAME)-object-files deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(ERROR_COLOR)...$(NAME) deleted"

re: fclean all

$(DEPS):
-include $(DEPS)