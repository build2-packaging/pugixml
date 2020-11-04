./ : {*/ -build/ -upstream/} manifest

./ : upstream/doc{README.md LICENSE.md} upstream/doc{docs/**}
doc{*} :
{
	install.subdirs = true
}

# Don't install tests.
#
tests/: install = false
