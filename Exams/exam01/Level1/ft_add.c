void    ft_add(int a, int *ptr){
    
    *ptr = a + *ptr;
}
/*1. The return type is void.
A function that returns void has no way to hand a result back to the caller through its return
 value — there's no return some_value;