# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD$

PORTNAME=	gnuastro
PORTVERSION=	0.8
CATEGORIES=	astro
MASTER_SITES=	GNU

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	GNU astronomy utilities and library

LICENSE=	GPLv3+

LIB_DEPENDS=	libcfitsio.so:astro/cfitsio \
		libwcs.so:astro/wcslib \
		libcurl.so:ftp/curl \
		libgsl.so:math/gsl \
		libpng.so:graphics/png \
		libtiff.so:graphics/tiff

USES=		gmake jpeg libtool:build localbase
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
TEST_TARGET=	check

INFO=		${PORTNAME}
PORTDOCS=	AUTHORS ChangeLog NEWS README THANKS

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's,gcc,${CC},' ${WRKSRC}/bin/buildprog/buildprog.c
	@${REINPLACE_CMD} -e 's,/bash,/sh,' ${WRKSRC}/doc/Makefile.in
	@${REINPLACE_CMD} -e '31s,^,#include <time.h>,' \
		${WRKSRC}/lib/gnuastro/table.h

post-install:
	@${FIND} ${STAGEDIR}${PREFIX}/etc -name \*.conf \
		-exec ${MV} '{}' '{}.sample' \;

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
