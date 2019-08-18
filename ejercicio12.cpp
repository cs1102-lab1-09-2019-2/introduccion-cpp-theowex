/*
 * Solamente incluir los header files que se requiren para hacer funcionar el programa
 */

int main()
{
    std::vector<int> v = { 5, 2, 1, 3, 4, 2, 2, 4, 5, 5 };

    std::unordered_set<int> s(v.begin(), v.end());
    v.assign(s.begin(), s.end());

    for (auto it = v.cbegin(); it != v.cend(); ++it)
        std::cout << *it << ' ';

    return 0;
}