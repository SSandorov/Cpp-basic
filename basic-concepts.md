# Learning C++

The most important thing to do when learning C++ is to focus on fundamental concepts (such as type safety, resource management, and invariants) and programming techniques (such as resource management using scoped objects and the use of iterators in algorithms) and not get lost in language-technical details. 

The purpose of learning a programming language is to become a better programmer, that is, to become more effective at designing and implementing new systems and at maintaining old ones. For this, an appreciation of programming and design techniques is far more important than understanding all the details. The understanding of technical details comes with time and practice.

## Programming in C++

[1] Represent ideas directly in code.

[2] Represent relationships among ideas directly in code (e.g., hierarchical, parametric, and ownership relationships).

[3] Represent independent ideas independently in code.

[4] Keep simple things simple (without making complex things impossible).

More specifically:

[5] Prefer statically type-checked solutions (when
applicable).

[6] Keep information local (e.g., avoid global variables, minimize the use of pointers).

[7] Don’t overabstract (i.e., don’t generalize, introduce class hierarchies, or parameterize beyond obvious needs and experience).

## C++ 11 design and programming techniques

[1] Use constructors to establish invariants (§2.4.3.2, §13.4, §17.2.1).

[2] Use constructor/destructor pairs to simplify resource management (RAII; §5.2, §13.3).

[3] Avoid “naked” new and delete (§3.2.1.2, §11.2.1).

[4] Use containers and algorithms rather than built-in arrays and ad hoc code (§4.4, §4.5, §7.4, Chapter 32).

[5] Prefer standard-library facilities to locally developed code (§1.2.4).

[6] Use exceptions, rather than error codes, to report errors that cannot be handled locally (§2.4.3, §13.1).

[7] Use move semantics to avoid copying large objects (§3.3.2, §17.5.2).

[8] Use unique_ptr to reference objects of polymorphic type (§5.2.1).

[9] Use shared_ptr to reference shared objects, that is, objects without a single owner that is responsible for their destruction (§5.2.1).

[10] Use templates to maintain static type safety (eliminate casts) and avoid unnecessary use of class hierarchies (§27.2).

## Recommendations derived from the sections on design, learning, and history of C++:

[1] Represent ideas (concepts) directly in code, for example, as a function, a class, or an enumeration; §1.2.

[2] Aim for your code to be both elegant and efficient; §1.2.

[3] Don’t overabstract; §1.2.

[4] Focus design on the provision of elegant and efficient abstractions, possibly presented as libraries; §1.2.

[5] Represent relationships among ideas directly in code, for example, through parameterization or a class hierarchy; §1.2.1.

[6] Represent independent ideas separately in code, for example, avoid mutual dependencies among classes; §1.2.1.

[7] C++ is not just object-oriented; §1.2.1.

[8] C++ is not just for generic programming; §1.2.1.

[9] Prefer solutions that can be statically checked; §1.2.1.

[10] Make resources explicit (represent them as class objects); §1.2.1, §1.4.2.1.

[11] Express simple ideas simply; §1.2.1.

[12] Use libraries, especially the standard library, rather than trying to build everything from scratch; §1.2.1.

[13] Use a type-rich style of programming; §1.2.2.

[14] Low-level code is not necessarily efficient; don’t avoid classes, templates, and standard-library components out of fear of performance problems; §1.2.4, §1.3.3.

[15] If data has an invariant, encapsulate it; §1.3.2.

[16] C++ is not just C with a few extensions; §1.3.3.

In general: To write a good program takes intelligence, taste, and patience. You are not going to get it right the first time. Experiment!

## C++ libraries and tool sets

such as Boost [Boost] (portable foundation libraries), POCO (Web development), Qt (cross-platform application development), wxWidgets (a cross-platform GUI library), WebKit (a layout engine library for Web browsers), CGAL (computational geometry), QuickFix (Financial Information eXchange), OpenCV (real-time image processing), and Root [Root,1995] (High-Energy Physics). There are many thousands of C++ libraries, so keeping up with them all is impossible.