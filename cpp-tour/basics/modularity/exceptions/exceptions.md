# Exceptions

```
double& Vector::operator[](int i) {
    if (i<0 || size()<=i) throw out_of_range{"Vector::operator[]"};     
    return elem[i]; 
}
```

The throw transfers control to a handler for exceptions of type out_of_range in some function that directly or indirectly called Vector::operator[](). To do that, the implementation will unwind the function call stack as needed to get back to the context of that caller.

```
void f(Vector& v) {      
    // ...
    try { // exceptions here are handled by the handler defined below           
    v[v.size()] = 7; // try to access beyond the end of v      
    }      
    catch (out_of_range) { // oops: out_of_range error          
    // ... handle range error ...      
    }      
    // ... 
}
```

We put code for which we are interested in handling exceptions into a try-block. That attempted assignment to v[v.size()] will fail. Therefore, the catch-clause providing a handler for out_of_range will be entered. The out_of_range type is defined in the standard library (in `<stdexcept>`) and is in fact used by some standard-library container access functions.

Use of the exception-handling mechanisms can make error handling simpler, more systematic, and more readable. See Chapter 13 for further discussion, details, and examples.