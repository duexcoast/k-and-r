int flipbit(int x, int position) {
    int mask;
    mask = 1 << position;

    return x ^ mask;
}
