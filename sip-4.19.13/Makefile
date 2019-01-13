
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages || mkdir -p $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages
	cp -f sipconfig.py $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages/sipconfig.py
	cp -f /Users/alan/PycharmProjects/ProjectPyQt/sip-4.19.13/sipdistutils.py $(DESTDIR)/Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages/sipdistutils.py
	/Users/alan/PycharmProjects/ProjectPyQt/bin/python3 /Users/alan/PycharmProjects/ProjectPyQt/sip-4.19.13/mk_distinfo.py "$(DESTDIR)" /Users/alan/PycharmProjects/ProjectPyQt/lib/python3.6/site-packages/sip-4.19.13.dist-info installed.txt

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
