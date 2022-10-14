# Simple LHEF Reader

This code illustrates a simple wrapper around the LHEF header ([docs](http://home.thep.lu.se/~leif/LHEF/)) for reading high energy physics (HEP) events in the LHE format.

To implement your own functionality simply alter the main while block in `src/main.cpp` to implement whatever analyses you need and run:

```
make
```

This produces a symlink (named `reader` by default) that will allow you to read and analyse events by:

```
./reader [name of LHE event file]
```

It is recommended to add the location of the symlink to your `PATH` environment variable.
