# Ch 1

## Exercise 1
_Implement, as best as you can, the identity function in your favorite language (or the second favorite, if your favorite language happens to be Haskell)._

[Ex1.scala](./Ex1.scala)

## Exercise 2
_Implement the composition function in your favorite language. It takes two functions as arguments and returns a function that is their composition._

[Ex2.scala](./Ex2.scala)

## Exercise 3
_Write a program that tries to test that your composition function respects identity._

[Ex3.scala](./Ex3.scala)

## Exercise 4
_Is the world-wide web a category in any sense? Are links morphisms?_

With browser assistance. Pages are objects and navigability/reachability is morphisms. I can
navigate to any page from itself using reload. Since navigability using links from A->B->C is
transitive, there is a composition for it. Links aren't morphisms however, because
there isn't an actual link on every page to every other page that is reachable.

## Exercise 5
_Is Facebook a category, with people as objects and friendships as morphisms?_

No. Friend arrows are not guaranteed to compose.

## Execise 6
_When is a directed graph a category?_

A directed graph would be a category if for all nodes k and all nodes j reachable from
k, there exists a path from k to j of length 1.
