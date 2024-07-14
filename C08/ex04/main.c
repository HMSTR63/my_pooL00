#include "ft_stock_str.h"

int main(int ac, char **av)
{
    ft_show_tab(ft_strs_to_tab(ac - 1, av + 1));
}
