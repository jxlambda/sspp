# Super Saiyan Potato Project

This is a really crude demo project of an autotools configuration for building
multiple, interdependent assets.

You know the drill. `bootstrap` the source tree, `configure` a build tree and `make`.
The libtool wrappers will handle the environment for linking when the programs are uninstalled.

When installing applications that link the libraries dynamically, unless
$DESTDIR is $prefix, i.e. DESTDIR is a staging directory, you'll have to adjust
the linkers library look-up path (LD_LIBRARY_PATH) yourself.
