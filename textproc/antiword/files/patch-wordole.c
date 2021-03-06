--- wordole.c.orig	2005-08-26 19:49:57 UTC
+++ wordole.c
@@ -259,6 +259,11 @@ bGetPPS(FILE *pFile,
 		}
 		tNameSize = (size_t)usGetWord(0x40, aucBytes);
 		tNameSize = (tNameSize + 1) / 2;
+		if (tNameSize >= sizeof(atPPSlist[0].szName)) {
+			werr(0, "PPS %d appears to be invalid.", iIndex);
+			atPPSlist = xfree(atPPSlist);
+			return FALSE;
+		}
 		vName2String(atPPSlist[iIndex].szName, aucBytes, tNameSize);
 		atPPSlist[iIndex].ucType = ucGetByte(0x42, aucBytes);
 		if (atPPSlist[iIndex].ucType == 5) {
