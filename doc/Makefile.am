SUFFIXES = .pod .1

man_MANS = seqexclude.1

EXTRA_DIST = $(man_MANS) seqexclude.pod

PODARGS = --center='User Manuals'

.pod.1:
	$(POD2MAN) $(PODARGS) $< > $@ && touch $@

## Maintainer parano checks
parano:
	(for p in *.pod; do podchecker --warnings --warnings $$p; done)
