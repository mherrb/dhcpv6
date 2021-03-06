#	$OpenBSD$

CFLAGS+=	-I${.CURDIR}/..

CFLAGS+=	-DSYSCONFDIR=\"/etc\" \
		-DLOCALDBDIR=\"/var/db\" \
		-DYYTEXT_POINTER=1 \
		-DHAVE_STRUCT_TM_TM_ZONE=1 \
		-DHAVE_TM_ZONE=1 \
		-DHAVE_SIG_ATOMIC_T=1 \
		-DHAVE_CLOCK_GETTIME=1 \
		-DHAVE_ANSI_FUNC=1 \
		-DHAVE_TAILQ_FOREACH_REVERSE_OLD=1 \
		-DHAVE_SA_LEN=1 \

CFLAGS+=	-Wunused -Wshadow
CFLAGS+=	-Wmissing-format-attribute -Wimplicit -Wnonnull
CFLAGS+=	-Winit-self -Wmain -Wmissing-braces -Wsequence-point 
CFLAGS+=	-Wreturn-type -Wtrigraphs -Wwrite-strings
CFLAGS+=	-Waddress -Wint-to-pointer-cast -Wpointer-to-int-cast
CFLAGS+=	-Wall -Werror -std=c99

.include <bsd.obj.mk>
