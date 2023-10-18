# Namespaces

Namespaces are a mechanism for expressing that some declarations belong together and that their names shouldn't clash with other names

```
namespace My_code {    
    class complex { /* ... */ };    
    complex sqrt(complex);    
    // ...    
    int main(); 
}  

int My_code::main() {    
    complex z {1,2};    
    auto z2 = sqrt(z);    
    std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";    
    // ... 
};  
    
int main() {
    return My_code::main();
}
```

By putting my code into the namespace My_code, I make sure that my names do not conflict with the standard-library names in namespace std. The precaution is wise, because the standard library does provide support for complex arithmetic.

To gain access to names in the standard-library namespace, we can use a using-directive:

```
using namespace std;
```

Namespaces are primarily used to organize larger program components, such as libraries. They simplify the composition of a program out of separately developed parts.