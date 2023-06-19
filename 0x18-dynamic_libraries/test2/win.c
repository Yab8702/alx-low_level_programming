int w()
{
    static int jp = -1;
    int values[] = {8, 8, 7, 9, 23, 74};
    jp = (jp + 1) % 6;
    return (values[jp]);
}
