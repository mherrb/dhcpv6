#	$OpenBSD$

.PATH:	${.CURDIR}/..

PROG= dhcp6c

BINDIR= /sbin

SRCS= 	dhcp6c.c common.c config.c prefixconf.c dhcp6c_ia.c timer.c \
        dhcp6c_script.c if.c base64.c auth.c dhcp6_ctl.c addrconf.c \
        lease.c cfparse.c cftoken.c

LDADD+=	-ll
LDSTATIC= ${STATIC}

CLEANFILES += cfparse.c cftoken.c 

MAN= dhcp6c.8 dhcp6c.conf.5

.include <bsd.own.mk>

.include <bsd.prog.mk>

