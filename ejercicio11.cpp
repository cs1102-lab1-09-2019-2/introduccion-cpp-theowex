
bool esPalindromo(int n) {
    bool palindromo = true;
    std::string s = std::to_string(n);
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] != s[len-i-1]) {
            palindromo = false;
            break;
        }
    }

}

int main() {

    if (esPalindromo(12321))
        std::cout<<"Es Palindromo\n";
    else
        std::cout<<"No es Palindromo\n";

    if (esPalindromo(1221))
        std::cout<<"Es Palindromo\n";
    else
        std::cout<<"No es Palindromo\n";

    if (esPalindromo(8594))
        std::cout<<"Es Palindromo\n";
    else
        std::cout<<"No es Palindromo\n";

    int n;
    std::cout<<"Ingrese un numero: \n";
    std::cin>>n;

    if (esPalindromo(n)) {
        std::cout<<n<<" es palindromo.\n";
    } else {
        std::cout<<n<<" no es palindromo.\n";
    }

    assert(esPalindromo(12344321) == true);
    assert(esPalindromo(1245) == true);
    assert(esPalindromo(8795978) == false);

    return 0;
}