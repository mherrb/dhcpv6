#	$OpenBSD$

.PATH:	${.CURDIR}/..

PROG=	dhcp6s

BINDIR= /usr/sbin

SRCS=	dhcp6s.c common.c if.c config.c timer.c lease.c \
        base64.c auth.c dhcp6_ctl.c cfparse.c cftoken.c

LDADD+=	-ll

CLEANFILES += cfparse.c cftoken.c 

MAN= dhcp6s.8 dhcp6s.conf.5

.include <bsd.own.mk>
.include <bsd.prog.mk>
