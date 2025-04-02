#include "push_swap.h"

void parse_arguments(int argc, char **argv, t_list **a)
{
    char *joined_args;
    char **split;
    int i;

    joined_args = join_arg(argc, argv);
    if (!joined_args)
        return (write(2, "Memory allocation error\n", 24), exit(1));

    split = ft_split(joined_args, ' ');
    free(joined_args);

    i = 0;
    while (split[i])
    {
        ft_lstadd_back(a, ft_listnew(ft_atoi(split[i])));
        i++;
    }
    free_split(split);
}


void parse_single_argument(char *arg, t_list **a)
{
    char **split;
    int i;

    split = ft_split(arg, ' ');
    i = 0;
    while (split[i])
    {
        ft_lstadd_back(a, ft_listnew(ft_atoi(split[i])));
        i++;
    }
    free_split(split);
}




