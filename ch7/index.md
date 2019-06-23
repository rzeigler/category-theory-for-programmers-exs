# Exercises

1) No. fmap id (Just a) <> id (Just a) forall. a

2) 

Identity law

fmap id r === id . r === r === id (r)

Composition Law

fmap (f . g) r = 
    (f . g) . r = 
    f . g . r = 
    f . (g . r) = 
    f . (fmap g r) = 
    (fmap f) . (fmap g r) = 
    ((fmap f) . (fmap g)) r

3)

```
function reader(f) {
    return {
        run: f
    }
}

function fmap(f, reader) {
    return {
        run: (a) => f(reader.run(a))
    }
}
```