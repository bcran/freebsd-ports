# $FreeBSD$

PORTNAME=	jackett
PORTVERSION=	0.11.15
CATEGORIES=	net-p2p
MASTER_SITES=	https://github.com/Jackett/Jackett/releases/download/
DISTNAME=	v${PORTVERSION}/Jackett.Binaries.Mono

MAINTAINER=	michiel@vanbaak.eu
COMMENT=	Torznab proxy implementation of the Newznab API

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	mono>0:lang/mono
LIB_DEPENDS=	libcurl.so:ftp/curl

USE_RC_SUBR=	jackett

NO_BUILD=	YES
WRKSRC=		${WRKDIR}/Jackett

USERS=	jackett
GROUPS=	jackett

.include <bsd.port.options.mk>

post-patch:
	@${RM} ${WRKSRC}/install_service_macos ${WRKSRC}/install_service_systemd.sh

do-install:
	${INSTALL} -d -m 755 ${STAGEDIR}/${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${STAGEDIR}/${DATADIR}

.include <bsd.port.mk>
