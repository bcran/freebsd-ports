# Created by: Nikolai Lifanov <lifanov@mail.lifanov.com>
# $FreeBSD$

PORTNAME=	scroll
PORTVERSION=	1.20180421
PORTREVISION=	2
CATEGORIES=	games haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A roguelike game

LICENSE=	GPLv2

PKGNAMEPREFIX=

USE_CABAL=	IfElse case-insensitive data-default monad-loops mtl \
		optparse-applicative ncurses random vector
STANDALONE=	yes
EXECUTABLE=	scroll

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
