# Ch 3

## Exercise 1

1. _A graph with one node and no edges_:
  - Add the identity arrow
2. _A graph with one node and one (directed) edge (hint: this edge can be composed with itself)_
  - The node already has the minimum identity arrow
3. _A graph with two nodes and a single arrow between them_
  - Add the identity arrow at each node
4. A graph with a single node and 26 arrows marked with the letters of the alphabet: a, b, c … z.
  - Add the identity arrow
  - Add composition arrows (a, a), (a, b), ... (z, a), and so forth. Then add composition arrows
  repeatedly for all the existing arrows.

## Exercise 2

_What kind of order is this?_

1. _A set of sets with the inclusion relation: A is included in B if every element of A is also an element of B._
  - From least to increasing strictness. Subset relationships are all associative.
  Under this specification, the set is at least a preorder. If A ⊆ B and B ⊆ C then A ⊆ C so the relationship is transitive.
  The set of sets is also a partial order. If A is included in B and B is included in A, then neither set may
  have elements not present in the other, therefore A = B.
  It is not a total order, because there is no relationship between disjoint sets.

2. _C++ types with the following subtyping relation: T1 is a subtype of T2 if a pointer to T1 can be passed to a function that expects a pointer to T2 without triggering a compilation error._
  - This is a partial order. The subtype relationship generalizes to a derived type relationship.
  If T1 may be used anywhere a T2 may be and T2 may be used anywhere T1 may be used then T1 and T2 are the same type because neither specializes the other yet they are equivalent (ignoring interfaces, etc.). Again, there are no relationships between types on unrelated type hierarchies so not a total order.

3. _Considering that Bool is a set of two values True and False, show that it forms two (set-theoretical) monoids with respect to, respectively, operator && (AND) and || (OR)._

  First off, boolean operators is associative. For the case of && we can see that the zero is true and for || the zero is false.

4. _Represent the Bool monoid with the AND operator as a category: List the morphisms and their rules of composition._

  && true is the identity morphism. && false morphism always results in a false result.

5. ...
