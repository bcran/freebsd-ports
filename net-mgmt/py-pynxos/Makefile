# $FreeBSD$

PORTNAME=	pynxos
DISTVERSION=	0.0.4
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	Python client for managing Cisco NX-OS devices through NX-API

LICENSE=	UNKNOWN
LICENSE_NAME=	unknown
LICENSE_TEXT=	This program is NOT in public domain.\
		It can be freely distributed for non-commercial purposes only,\
		and THERE IS NO WARRANTY FOR THIS PROGRAM.
LICENSE_PERMS=	dist-mirror no-dist-sell pkg-mirror no-pkg-sell auto-accept

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}future>0:devel/py-future@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=2.7.0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scp>0:security/py-scp@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
