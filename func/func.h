/*
example lib
*/
template <typename T>
auto func_add(const T &x, const T &y)
{
    return x + y;
}
template <typename T>
auto func_sub(const T &x, const T &y)
{
    return x - y;
}
template <typename T>
auto func_div(const T &x, const T &y)
{
    if(y)
        return x + y;
    else
    {
        return y;
    }
}
template <typename T>
auto func_mul(const T &x, const T &y)
{
    return x * y;
}

void print(const char *message);

void print(const int &number);