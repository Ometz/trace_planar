/*
 * Automatically Generated from Mathematica.
 * Sat 20 Oct 2018 16:51:16 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t583;
  double t651;
  double t588;
  double t601;
  double t721;
  double t881;
  double t935;
  double t936;
  double t939;
  double t873;
  double t887;
  double t910;
  double t944;
  double t945;
  double t959;
  double t963;
  double t964;
  double t933;
  double t940;
  double t941;
  double t967;
  double t970;
  double t971;
  double t976;
  double t979;
  double t983;
  double t1001;
  double t1002;
  double t1003;
  double t992;
  double t993;
  double t994;
  double t1044;
  double t1051;
  double t1052;
  double t1071;
  double t1072;
  double t1073;
  double t1074;
  double t1075;
  double t1076;
  double t1114;
  double t1077;
  double t1078;
  double t1082;
  double t1083;
  double t1084;
  double t1112;
  double t1115;
  double t1116;
  double t1123;
  double t1125;
  double t1126;
  double t1146;
  double t1163;
  double t1164;
  double t1165;
  double t1159;
  double t1152;
  double t1153;
  double t1154;
  double t1122;
  double t1147;
  double t1155;
  double t1160;
  double t1081;
  double t1085;
  double t1086;
  double t1166;
  double t1167;
  double t1182;
  double t1185;
  double t1186;
  double t1207;
  double t1208;
  double t1209;
  double t1189;
  double t1190;
  double t1191;
  double t1172;
  double t1176;
  double t1262;
  double t1266;
  double t1267;
  double t1148;
  double t1161;
  double t1162;
  double t1236;
  double t1240;
  double t1241;
  double t1293;
  double t1294;
  double t1295;
  double t1206;
  double t1210;
  double t1211;
  double t1296;
  double t1297;
  double t1299;
  double t1300;
  double t975;
  double t984;
  double t985;
  double t988;
  double t991;
  double t998;
  double t1037;
  double t1041;
  double t1042;
  double t1043;
  double t1053;
  double t1054;
  double t1057;
  double t1058;
  double t1059;
  double t1060;
  double t1065;
  double t1316;
  double t1319;
  double t1323;
  double t1324;
  double t1068;
  double t1285;
  double t1286;
  double t1287;
  double t1343;
  double t1344;
  double t1346;
  double t1347;
  double t1348;
  double t1298;
  double t1301;
  double t1302;
  double t1303;
  double t1365;
  double t1369;
  double t1370;
  double t1345;
  double t1349;
  double t1350;
  double t1304;
  double t1308;
  double t594;
  double t658;
  double t659;
  double t682;
  double t683;
  double t684;
  double t714;
  double t715;
  double t718;
  double t1386;
  double t1389;
  double t1404;
  double t1406;
  double t1423;
  double t1427;
  double t1428;
  double t1431;
  double t1432;
  double t1433;
  double t1434;
  double t1435;
  double t1446;
  double t1447;
  double t1448;
  double t1439;
  double t1440;
  double t1443;
  double t1405;
  double t1407;
  double t1408;
  double t1449;
  double t1450;
  double t1451;
  double t1171;
  double t1220;
  double t1472;
  double t1476;
  double t1477;
  double t1478;
  double t1479;
  double t1480;
  double t1492;
  double t1481;
  double t1482;
  double t1486;
  double t1487;
  double t1488;
  double t1491;
  double t1493;
  double t1494;
  double t1496;
  double t1501;
  double t1505;
  double t1506;
  double t1519;
  double t1520;
  double t1521;
  double t1495;
  double t1507;
  double t1512;
  double t1515;
  double t1516;
  double t1509;
  double t1510;
  double t1511;
  double t1522;
  double t1523;
  double t1483;
  double t1489;
  double t1490;
  double t1525;
  double t1526;
  double t1527;
  double t1388;
  double t1390;
  double t1391;
  double t1392;
  double t1393;
  double t1394;
  double t1395;
  double t1396;
  double t1397;
  double t1429;
  double t1444;
  double t1452;
  double t1453;
  double t1540;
  double t1541;
  double t1458;
  double t1459;
  double t1460;
  double t1455;
  double t1544;
  double t1545;
  double t1546;
  double t1552;
  double t1553;
  double t1554;
  double t1508;
  double t1517;
  double t1518;
  double t1524;
  double t1572;
  double t1573;
  double t1574;
  double t1532;
  double t1534;
  double t1535;
  double t1536;
  double t1577;
  double t1578;
  double t1579;
  double t1567;
  double t1568;
  double t1590;
  double t1591;
  double t1592;
  double t1606;
  double t1607;
  double t1608;
  double t1583;
  double t1584;
  double t1585;
  double t1609;
  double t1610;
  double t1612;
  double t1613;
  double t1542;
  double t1543;
  double t1548;
  double t1555;
  double t1556;
  double t1557;
  double t1558;
  double t1559;
  double t1560;
  double t1561;
  double t1623;
  double t1624;
  double t1626;
  double t1627;
  double t1564;
  double t1601;
  double t1602;
  double t1603;
  double t1635;
  double t1636;
  double t1638;
  double t1639;
  double t1640;
  double t1611;
  double t1614;
  double t1615;
  double t1616;
  double t1644;
  double t1645;
  double t1646;
  double t1637;
  double t1641;
  double t1642;
  double t1617;
  double t1618;
  double t1401;
  double t1402;
  double t995;
  double t1008;
  double t1012;
  double t1398;
  double t1399;
  double t1066;
  double t1067;
  double t1069;
  double t1187;
  double t1188;
  double t1200;
  double t1204;
  double t1205;
  double t1462;
  double t1463;
  double t1465;
  double t1466;
  double t1268;
  double t1274;
  double t1276;
  double t1277;
  double t1278;
  double t1288;
  double t1309;
  double t1662;
  double t1322;
  double t1325;
  double t1326;
  double t1664;
  double t1665;
  double t1666;
  double t1667;
  double t1328;
  double t1337;
  double t1341;
  double t1681;
  double t1351;
  double t1371;
  double t1372;
  double t1683;
  double t1684;
  double t1685;
  double t1686;
  double t1374;
  double t1375;
  double t1376;
  double t1658;
  double t1659;
  double t1660;
  double t1661;
  double t1456;
  double t1669;
  double t1675;
  double t1697;
  double t1698;
  double t1699;
  double t1700;
  double t1457;
  double t1547;
  double t1549;
  double t1550;
  double t1710;
  double t1409;
  double t1430;
  double t1562;
  double t1563;
  double t1565;
  double t1720;
  double t1575;
  double t1576;
  double t1580;
  double t1581;
  double t1582;
  double t1528;
  double t1529;
  double t1725;
  double t1531;
  double t1533;
  double t1593;
  double t1594;
  double t1595;
  double t1596;
  double t1597;
  double t1604;
  double t1619;
  double t1730;
  double t1625;
  double t1628;
  double t1629;
  double t1732;
  double t1733;
  double t1734;
  double t1631;
  double t1632;
  double t1633;
  double t1746;
  double t1643;
  double t1647;
  double t1648;
  double t1748;
  double t1749;
  double t1750;
  double t1751;
  double t1650;
  double t1651;
  double t1652;
  double t1810;
  double t1811;
  double t1812;
  double t1806;
  double t1807;
  double t1808;
  double t1797;
  double t1798;
  double t1799;
  double t1800;
  double t1802;
  double t1803;
  double t1804;
  double t1816;
  double t1817;
  double t1821;
  double t1822;
  double t1865;
  double t1866;
  double t1867;
  double t1861;
  double t1862;
  double t1863;
  double t1852;
  double t1853;
  double t1854;
  double t1855;
  double t1857;
  double t1858;
  double t1859;
  double t1871;
  double t1872;
  double t1876;
  double t1877;
  double t1912;
  double t1913;
  double t1914;
  double t1908;
  double t1909;
  double t1910;
  double t1939;
  double t1940;
  double t1941;
  double t1935;
  double t1936;
  double t1937;
  t583 = Cos(var1[3]);
  t651 = Sin(var1[3]);
  t588 = Sin(var1[2]);
  t601 = Cos(var1[2]);
  t721 = Cos(var1[5]);
  t881 = Sin(var1[5]);
  t935 = t583*t721;
  t936 = -1.*t651*t881;
  t939 = t935 + t936;
  t873 = -1.*t721*t651;
  t887 = -1.*t583*t881;
  t910 = t873 + t887;
  t944 = -1.*t721;
  t945 = 1. + t944;
  t959 = -0.4*t945;
  t963 = -0.51*t721;
  t964 = t959 + t963;
  t933 = t588*t910;
  t940 = t601*t939;
  t941 = t933 + t940;
  t967 = t964*t651;
  t970 = -0.11*t583*t881;
  t971 = t967 + t970;
  t976 = t583*t964;
  t979 = 0.11*t651*t881;
  t983 = t976 + t979;
  t1001 = t721*t651;
  t1002 = t583*t881;
  t1003 = t1001 + t1002;
  t992 = -1.*t964*t651;
  t993 = 0.11*t583*t881;
  t994 = t992 + t993;
  t1044 = -1.*t583*t721;
  t1051 = t651*t881;
  t1052 = t1044 + t1051;
  t1071 = Cos(var1[7]);
  t1072 = -1.*t1071;
  t1073 = 1. + t1072;
  t1074 = -0.8*t1073;
  t1075 = -0.8*t1071;
  t1076 = t1074 + t1075;
  t1114 = Sin(var1[7]);
  t1077 = t721*t1076;
  t1078 = t959 + t1077;
  t1082 = 0.4*t881;
  t1083 = t1076*t881;
  t1084 = t1082 + t1083;
  t1112 = -1.*t1071*t881;
  t1115 = -1.*t721*t1114;
  t1116 = t1112 + t1115;
  t1123 = t721*t1071;
  t1125 = -1.*t881*t1114;
  t1126 = t1123 + t1125;
  t1146 = t583*t1126;
  t1163 = t1071*t881;
  t1164 = t721*t1114;
  t1165 = t1163 + t1164;
  t1159 = -1.*t651*t1126;
  t1152 = t583*t1078;
  t1153 = -1.*t651*t1084;
  t1154 = t1152 + t1153;
  t1122 = t651*t1116;
  t1147 = t1122 + t1146;
  t1155 = t583*t1116;
  t1160 = t1155 + t1159;
  t1081 = t1078*t651;
  t1085 = t583*t1084;
  t1086 = t1081 + t1085;
  t1166 = -1.*t651*t1165;
  t1167 = t1166 + t1146;
  t1182 = -1.*t651*t1116;
  t1185 = -1.*t583*t1126;
  t1186 = t1182 + t1185;
  t1207 = t583*t1165;
  t1208 = t651*t1126;
  t1209 = t1207 + t1208;
  t1189 = -1.*t1078*t651;
  t1190 = -1.*t583*t1084;
  t1191 = t1189 + t1190;
  t1172 = -1.*t583*t1165;
  t1176 = t1172 + t1159;
  t1262 = t601*t1147;
  t1266 = t588*t1160;
  t1267 = t1262 + t1266;
  t1148 = -1.*t1086*t1147;
  t1161 = -1.*t1154*t1160;
  t1162 = t1148 + t1161;
  t1236 = t1154*t1167;
  t1240 = t1086*t1209;
  t1241 = t1236 + t1240;
  t1293 = -1.*t721*t1071;
  t1294 = t881*t1114;
  t1295 = t1293 + t1294;
  t1206 = t588*t1167;
  t1210 = t601*t1209;
  t1211 = t1206 + t1210;
  t1296 = t583*t1295;
  t1297 = t1182 + t1296;
  t1299 = t651*t1295;
  t1300 = t1155 + t1299;
  t975 = -1.*t971*t939;
  t984 = -1.*t910*t983;
  t985 = t975 + t984;
  t988 = 6.8*t941*t985;
  t991 = t971*t939;
  t998 = t910*t983;
  t1037 = t971*t1003;
  t1041 = t939*t983;
  t1042 = t1037 + t1041;
  t1043 = t601*t910;
  t1053 = t588*t1052;
  t1054 = t1043 + t1053;
  t1057 = 6.8*t1042*t1054;
  t1058 = t601*t1003;
  t1059 = t588*t939;
  t1060 = t1058 + t1059;
  t1065 = -1.*t910*t971;
  t1316 = 0.11*t721*t651;
  t1319 = t1316 + t993;
  t1323 = -0.11*t583*t721;
  t1324 = t1323 + t979;
  t1068 = -1.*t983*t1052;
  t1285 = 0.3*t1267*t1162;
  t1286 = t1086*t1147;
  t1287 = t1154*t1160;
  t1343 = 0.4*t721;
  t1344 = t1343 + t1077;
  t1346 = -0.4*t881;
  t1347 = -1.*t1076*t881;
  t1348 = t1346 + t1347;
  t1298 = t588*t1297;
  t1301 = t601*t1300;
  t1302 = t1298 + t1301;
  t1303 = 0.3*t1241*t1302;
  t1365 = t583*t1344;
  t1369 = t651*t1348;
  t1370 = t1365 + t1369;
  t1345 = -1.*t1344*t651;
  t1349 = t583*t1348;
  t1350 = t1345 + t1349;
  t1304 = -1.*t1154*t1297;
  t1308 = -1.*t1086*t1300;
  t594 = -1.*t583*t588;
  t658 = -1.*t601*t651;
  t659 = t594 + t658;
  t682 = Power(t583,2);
  t683 = -0.11*t682;
  t684 = Power(t651,2);
  t714 = -0.11*t684;
  t715 = t683 + t714;
  t718 = 6.8*t659*t715;
  t1386 = Cos(var1[4]);
  t1389 = Sin(var1[4]);
  t1404 = Cos(var1[6]);
  t1406 = Sin(var1[6]);
  t1423 = t1386*t1404;
  t1427 = -1.*t1389*t1406;
  t1428 = t1423 + t1427;
  t1431 = -1.*t1404;
  t1432 = 1. + t1431;
  t1433 = -0.4*t1432;
  t1434 = -0.51*t1404;
  t1435 = t1433 + t1434;
  t1446 = -1.*t1404*t1389;
  t1447 = -1.*t1386*t1406;
  t1448 = t1446 + t1447;
  t1439 = t1435*t1389;
  t1440 = -0.11*t1386*t1406;
  t1443 = t1439 + t1440;
  t1405 = t1404*t1389;
  t1407 = t1386*t1406;
  t1408 = t1405 + t1407;
  t1449 = t1386*t1435;
  t1450 = 0.11*t1389*t1406;
  t1451 = t1449 + t1450;
  t1171 = t601*t1167;
  t1220 = t601*t1160;
  t1472 = Cos(var1[8]);
  t1476 = -1.*t1472;
  t1477 = 1. + t1476;
  t1478 = -0.8*t1477;
  t1479 = -0.8*t1472;
  t1480 = t1478 + t1479;
  t1492 = Sin(var1[8]);
  t1481 = t1404*t1480;
  t1482 = t1433 + t1481;
  t1486 = 0.4*t1406;
  t1487 = t1480*t1406;
  t1488 = t1486 + t1487;
  t1491 = -1.*t1472*t1406;
  t1493 = -1.*t1404*t1492;
  t1494 = t1491 + t1493;
  t1496 = t1404*t1472;
  t1501 = -1.*t1406*t1492;
  t1505 = t1496 + t1501;
  t1506 = t1386*t1505;
  t1519 = t1472*t1406;
  t1520 = t1404*t1492;
  t1521 = t1519 + t1520;
  t1495 = t1389*t1494;
  t1507 = t1495 + t1506;
  t1512 = t1386*t1494;
  t1515 = -1.*t1389*t1505;
  t1516 = t1512 + t1515;
  t1509 = t1386*t1482;
  t1510 = -1.*t1389*t1488;
  t1511 = t1509 + t1510;
  t1522 = -1.*t1389*t1521;
  t1523 = t1522 + t1506;
  t1483 = t1482*t1389;
  t1489 = t1386*t1488;
  t1490 = t1483 + t1489;
  t1525 = t1386*t1521;
  t1526 = t1389*t1505;
  t1527 = t1525 + t1526;
  t1388 = -1.*t1386*t588;
  t1390 = -1.*t601*t1389;
  t1391 = t1388 + t1390;
  t1392 = Power(t1386,2);
  t1393 = -0.11*t1392;
  t1394 = Power(t1389,2);
  t1395 = -0.11*t1394;
  t1396 = t1393 + t1395;
  t1397 = 6.8*t1391*t1396;
  t1429 = t601*t1428;
  t1444 = -1.*t1443*t1428;
  t1452 = -1.*t1448*t1451;
  t1453 = t1444 + t1452;
  t1540 = t588*t1448;
  t1541 = t1540 + t1429;
  t1458 = t1443*t1408;
  t1459 = t1428*t1451;
  t1460 = t1458 + t1459;
  t1455 = t601*t1448;
  t1544 = -1.*t1435*t1389;
  t1545 = 0.11*t1386*t1406;
  t1546 = t1544 + t1545;
  t1552 = -1.*t1386*t1404;
  t1553 = t1389*t1406;
  t1554 = t1552 + t1553;
  t1508 = -1.*t1490*t1507;
  t1517 = -1.*t1511*t1516;
  t1518 = t1508 + t1517;
  t1524 = t601*t1523;
  t1572 = -1.*t1389*t1494;
  t1573 = -1.*t1386*t1505;
  t1574 = t1572 + t1573;
  t1532 = t601*t1516;
  t1534 = t1511*t1523;
  t1535 = t1490*t1527;
  t1536 = t1534 + t1535;
  t1577 = -1.*t1482*t1389;
  t1578 = -1.*t1386*t1488;
  t1579 = t1577 + t1578;
  t1567 = -1.*t1386*t1521;
  t1568 = t1567 + t1515;
  t1590 = t601*t1507;
  t1591 = t588*t1516;
  t1592 = t1590 + t1591;
  t1606 = -1.*t1404*t1472;
  t1607 = t1406*t1492;
  t1608 = t1606 + t1607;
  t1583 = t588*t1523;
  t1584 = t601*t1527;
  t1585 = t1583 + t1584;
  t1609 = t1386*t1608;
  t1610 = t1572 + t1609;
  t1612 = t1389*t1608;
  t1613 = t1512 + t1612;
  t1542 = 6.8*t1541*t1453;
  t1543 = t1443*t1428;
  t1548 = t1448*t1451;
  t1555 = t588*t1554;
  t1556 = t1455 + t1555;
  t1557 = 6.8*t1460*t1556;
  t1558 = t601*t1408;
  t1559 = t588*t1428;
  t1560 = t1558 + t1559;
  t1561 = -1.*t1448*t1443;
  t1623 = 0.11*t1404*t1389;
  t1624 = t1623 + t1545;
  t1626 = -0.11*t1386*t1404;
  t1627 = t1626 + t1450;
  t1564 = -1.*t1451*t1554;
  t1601 = 0.3*t1592*t1518;
  t1602 = t1490*t1507;
  t1603 = t1511*t1516;
  t1635 = 0.4*t1404;
  t1636 = t1635 + t1481;
  t1638 = -0.4*t1406;
  t1639 = -1.*t1480*t1406;
  t1640 = t1638 + t1639;
  t1611 = t588*t1610;
  t1614 = t601*t1613;
  t1615 = t1611 + t1614;
  t1616 = 0.3*t1536*t1615;
  t1644 = t1386*t1636;
  t1645 = t1389*t1640;
  t1646 = t1644 + t1645;
  t1637 = -1.*t1636*t1389;
  t1641 = t1386*t1640;
  t1642 = t1637 + t1641;
  t1617 = -1.*t1511*t1610;
  t1618 = -1.*t1490*t1613;
  t1401 = -1.*t588*t939;
  t1402 = t1043 + t1401;
  t995 = t994*t939;
  t1008 = t1003*t983;
  t1012 = t991 + t995 + t998 + t1008;
  t1398 = -1.*t588*t1003;
  t1399 = t1398 + t940;
  t1066 = -1.*t910*t994;
  t1067 = -1.*t939*t983;
  t1069 = t1065 + t1066 + t1067 + t1068;
  t1187 = -1.*t1154*t1186;
  t1188 = -1.*t1154*t1147;
  t1200 = -1.*t1191*t1160;
  t1204 = -1.*t1086*t1160;
  t1205 = t1187 + t1188 + t1200 + t1204;
  t1462 = -1.*t588*t1209;
  t1463 = t1171 + t1462;
  t1465 = -1.*t588*t1147;
  t1466 = t1465 + t1220;
  t1268 = t1191*t1167;
  t1274 = t1086*t1167;
  t1276 = t1154*t1176;
  t1277 = t1154*t1209;
  t1278 = t1268 + t1274 + t1276 + t1277;
  t1288 = t1286 + t1287;
  t1309 = t1304 + t1308;
  t1662 = 6.8*t1402*t985;
  t1322 = t1319*t939;
  t1325 = t1003*t1324;
  t1326 = t991 + t1322 + t998 + t1325;
  t1664 = -1.*t588*t910;
  t1665 = t601*t1052;
  t1666 = t1664 + t1665;
  t1667 = 6.8*t1042*t1666;
  t1328 = -1.*t910*t1319;
  t1337 = -1.*t939*t1324;
  t1341 = t1065 + t1328 + t1337 + t1068;
  t1681 = 0.3*t1466*t1162;
  t1351 = t1350*t1167;
  t1371 = t1370*t1209;
  t1372 = t1286 + t1351 + t1287 + t1371;
  t1683 = t601*t1297;
  t1684 = -1.*t588*t1300;
  t1685 = t1683 + t1684;
  t1686 = 0.3*t1241*t1685;
  t1374 = -1.*t1370*t1147;
  t1375 = -1.*t1350*t1160;
  t1376 = t1374 + t1375 + t1304 + t1308;
  t1658 = -1.*t601*t583;
  t1659 = t588*t651;
  t1660 = t1658 + t1659;
  t1661 = 6.8*t1660*t715;
  t1456 = -1.*t588*t1428;
  t1669 = -1.*t588*t1167;
  t1675 = -1.*t588*t1160;
  t1697 = -1.*t601*t1386;
  t1698 = t588*t1389;
  t1699 = t1697 + t1698;
  t1700 = 6.8*t1699*t1396;
  t1457 = t1455 + t1456;
  t1547 = t1546*t1428;
  t1549 = t1408*t1451;
  t1550 = t1543 + t1547 + t1548 + t1549;
  t1710 = -1.*t588*t1448;
  t1409 = -1.*t588*t1408;
  t1430 = t1409 + t1429;
  t1562 = -1.*t1448*t1546;
  t1563 = -1.*t1428*t1451;
  t1565 = t1561 + t1562 + t1563 + t1564;
  t1720 = -1.*t588*t1523;
  t1575 = -1.*t1511*t1574;
  t1576 = -1.*t1511*t1507;
  t1580 = -1.*t1579*t1516;
  t1581 = -1.*t1490*t1516;
  t1582 = t1575 + t1576 + t1580 + t1581;
  t1528 = -1.*t588*t1527;
  t1529 = t1524 + t1528;
  t1725 = -1.*t588*t1516;
  t1531 = -1.*t588*t1507;
  t1533 = t1531 + t1532;
  t1593 = t1579*t1523;
  t1594 = t1490*t1523;
  t1595 = t1511*t1568;
  t1596 = t1511*t1527;
  t1597 = t1593 + t1594 + t1595 + t1596;
  t1604 = t1602 + t1603;
  t1619 = t1617 + t1618;
  t1730 = 6.8*t1457*t1453;
  t1625 = t1624*t1428;
  t1628 = t1408*t1627;
  t1629 = t1543 + t1625 + t1548 + t1628;
  t1732 = t601*t1554;
  t1733 = t1710 + t1732;
  t1734 = 6.8*t1460*t1733;
  t1631 = -1.*t1448*t1624;
  t1632 = -1.*t1428*t1627;
  t1633 = t1561 + t1631 + t1632 + t1564;
  t1746 = 0.3*t1533*t1518;
  t1643 = t1642*t1523;
  t1647 = t1646*t1527;
  t1648 = t1602 + t1643 + t1603 + t1647;
  t1748 = t601*t1610;
  t1749 = -1.*t588*t1613;
  t1750 = t1748 + t1749;
  t1751 = 0.3*t1536*t1750;
  t1650 = -1.*t1646*t1507;
  t1651 = -1.*t1642*t1516;
  t1652 = t1650 + t1651 + t1617 + t1618;
  t1810 = t1084*t1165;
  t1811 = t1078*t1126;
  t1812 = t1810 + t1811;
  t1806 = -1.*t1078*t1116;
  t1807 = -1.*t1084*t1126;
  t1808 = t1806 + t1807;
  t1797 = t964*t721;
  t1798 = Power(t881,2);
  t1799 = -0.11*t1798;
  t1800 = t1797 + t1799;
  t1802 = t964*t881;
  t1803 = 0.11*t721*t881;
  t1804 = t1802 + t1803;
  t1816 = -1.*t1084*t1116;
  t1817 = -1.*t1078*t1295;
  t1821 = t1078*t1116;
  t1822 = t1084*t1126;
  t1865 = t1488*t1521;
  t1866 = t1482*t1505;
  t1867 = t1865 + t1866;
  t1861 = -1.*t1482*t1494;
  t1862 = -1.*t1488*t1505;
  t1863 = t1861 + t1862;
  t1852 = t1435*t1404;
  t1853 = Power(t1406,2);
  t1854 = -0.11*t1853;
  t1855 = t1852 + t1854;
  t1857 = t1435*t1406;
  t1858 = 0.11*t1404*t1406;
  t1859 = t1857 + t1858;
  t1871 = -1.*t1488*t1494;
  t1872 = -1.*t1482*t1608;
  t1876 = t1482*t1494;
  t1877 = t1488*t1505;
  t1912 = 0.4*t1071;
  t1913 = t1076*t1071;
  t1914 = t1912 + t1913;
  t1908 = 0.4*t1114;
  t1909 = t1076*t1114;
  t1910 = t1908 + t1909;
  t1939 = 0.4*t1472;
  t1940 = t1480*t1472;
  t1941 = t1939 + t1940;
  t1935 = 0.4*t1492;
  t1936 = t1480*t1492;
  t1937 = t1935 + t1936;
  p_output1[0]=var2[2]*(-0.5*(t1397 + 6.8*t1042*t1402 + 6.8*t1430*t1453 + 6.8*t1457*t1460 + 0.3*t1162*t1463 + 0.3*t1241*t1466 + 0.3*t1518*t1529 + 0.3*t1533*t1536 - 2.88*t588 + t718 + 6.8*t1399*t985)*var2[2] - 0.5*(t1057 + 6.8*t1060*t1069 + 0.3*t1205*t1211 + 0.3*t1267*t1278 + 0.3*t1162*(t1171 + t1176*t588) + 0.3*t1241*(t1220 + t1186*t588) + t718 + 6.8*t1012*t941 + t988)*var2[3] - 0.5*(t1397 + t1542 + 6.8*t1541*t1550 + t1557 + 6.8*t1560*t1565 + 0.3*t1582*t1585 + 0.3*t1592*t1597 + 0.3*t1518*(t1524 + t1568*t588) + 0.3*t1536*(t1532 + t1574*t588))*var2[4] - 0.5*(t1057 + t1285 + t1303 + 6.8*t1060*t1341 + 0.3*t1267*t1372 + 0.3*t1211*t1376 + 6.8*t1326*t941 + t988)*var2[5] - 0.5*(t1542 + t1557 + t1601 + t1616 + 6.8*t1541*t1629 + 6.8*t1560*t1633 + 0.3*t1592*t1648 + 0.3*t1585*t1652)*var2[6] - 0.5*(t1285 + 0.3*t1267*t1288 + t1303 + 0.3*t1211*t1309)*var2[7] - 0.5*(t1601 + 0.3*t1592*t1604 + t1616 + 0.3*t1585*t1619)*var2[8]);
  p_output1[1]=var2[2]*(-0.5*(t1661 + t1700 - 2.88*t601 + 0.3*t1241*(t1675 - 1.*t1147*t601) + 0.3*t1162*(t1669 - 1.*t1209*t601) + 6.8*t1453*(t1456 - 1.*t1408*t601) + 6.8*t1460*(t1710 - 1.*t1428*t601) + 0.3*t1536*(t1725 - 1.*t1507*t601) + 0.3*t1518*(t1720 - 1.*t1527*t601) + 6.8*t1042*(t1664 - 1.*t601*t939) + 6.8*(t1401 - 1.*t1003*t601)*t985)*var2[2] - 0.5*(6.8*t1069*t1399 + 6.8*t1012*t1402 + 0.3*t1205*t1463 + 0.3*t1278*t1466 + t1661 + t1662 + t1667 + 0.3*t1162*(t1669 + t1176*t601) + 0.3*t1241*(t1675 + t1186*t601))*var2[3] - 0.5*(6.8*t1457*t1550 + 6.8*t1430*t1565 + 0.3*t1529*t1582 + 0.3*t1533*t1597 + t1700 + t1730 + t1734 + 0.3*t1518*(t1720 + t1568*t601) + 0.3*t1536*(t1725 + t1574*t601))*var2[4] - 0.5*(6.8*t1341*t1399 + 6.8*t1326*t1402 + 0.3*t1376*t1463 + 0.3*t1372*t1466 + t1662 + t1667 + t1681 + t1686)*var2[5] - 0.5*(6.8*t1457*t1629 + 6.8*t1430*t1633 + 0.3*t1533*t1648 + 0.3*t1529*t1652 + t1730 + t1734 + t1746 + t1751)*var2[6] - 0.5*(0.3*t1309*t1463 + 0.3*t1288*t1466 + t1681 + t1686)*var2[7] - 0.5*(0.3*t1533*t1604 + 0.3*t1529*t1619 + t1746 + t1751)*var2[8]);
  p_output1[2]=var2[2]*(-0.5*(13.6*t1012*t1042 + 0.6*t1162*t1205 + 0.6*t1241*t1278 + 13.6*t1069*t985)*var2[3] - 0.5*(13.6*t1460*t1550 + 13.6*t1453*t1565 + 0.6*t1518*t1582 + 0.6*t1536*t1597)*var2[4] - 0.5*(13.6*t1042*t1326 + 0.6*t1241*t1372 + 0.6*t1162*t1376 + 13.6*t1341*t985)*var2[5] - 0.5*(13.6*t1460*t1629 + 13.6*t1453*t1633 + 0.6*t1536*t1648 + 0.6*t1518*t1652)*var2[6] - 0.5*(0.6*t1241*t1288 + 0.6*t1162*t1309)*var2[7] - 0.5*(0.6*t1536*t1604 + 0.6*t1518*t1619)*var2[8]);
  p_output1[3]=var2[2]*(-0.5*(6.8*t1012*t1800 + 6.8*t1069*t1804 + 0.3*t1205*t1808 + 0.3*t1278*t1812)*var2[3] - 0.5*(6.8*t1326*t1800 + 6.8*t1341*t1804 + 0.3*t1376*t1808 + 0.3*t1372*t1812 + 0.3*t1162*(-1.*t1126*t1344 - 1.*t1116*t1348 + t1816 + t1817) + 0.3*t1241*(t1165*t1344 + t1126*t1348 + t1821 + t1822) + 6.8*t1042*(-0.11*t721*t881 - 1.*t881*t964) + 6.8*(t1797 + 0.11*Power(t721,2))*t985)*var2[5] - 0.5*(0.3*t1309*t1808 + 0.3*t1288*t1812 + 0.3*t1162*(t1816 + t1817) + 0.3*t1241*(t1821 + t1822))*var2[7]);
  p_output1[4]=var2[2]*(-0.5*(6.8*t1550*t1855 + 6.8*t1565*t1859 + 0.3*t1582*t1863 + 0.3*t1597*t1867)*var2[4] - 0.5*(6.8*(-0.11*t1404*t1406 - 1.*t1406*t1435)*t1460 + 6.8*t1453*(0.11*Power(t1404,2) + t1852) + 6.8*t1629*t1855 + 6.8*t1633*t1859 + 0.3*t1652*t1863 + 0.3*t1648*t1867 + 0.3*t1518*(-1.*t1505*t1636 - 1.*t1494*t1640 + t1871 + t1872) + 0.3*t1536*(t1521*t1636 + t1505*t1640 + t1876 + t1877))*var2[6] - 0.5*(0.3*t1619*t1863 + 0.3*t1604*t1867 + 0.3*t1518*(t1871 + t1872) + 0.3*t1536*(t1876 + t1877))*var2[8]);
  p_output1[5]=var2[2]*(-0.5*(-0.748*t1012 + 0.3*t1205*t1910 + 0.3*t1278*t1914)*var2[3] - 0.5*(-0.748*t1326 + 0.3*t1376*t1910 + 0.3*t1372*t1914)*var2[5] - 0.5*(0.3*(-0.4*t1114 - 1.*t1076*t1114)*t1241 + 0.3*t1309*t1910 + 0.3*t1162*t1914 + 0.3*t1288*t1914)*var2[7]);
  p_output1[6]=var2[2]*(-0.5*(-0.748*t1550 + 0.3*t1582*t1937 + 0.3*t1597*t1941)*var2[4] - 0.5*(-0.748*t1629 + 0.3*t1652*t1937 + 0.3*t1648*t1941)*var2[6] - 0.5*(0.3*(-0.4*t1492 - 1.*t1480*t1492)*t1536 + 0.3*t1619*t1937 + 0.3*t1518*t1941 + 0.3*t1604*t1941)*var2[8]);
  p_output1[7]=0;
  p_output1[8]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 9, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec3_seven_link_walker.hh"

namespace SymFunction
{

void Ce1_vec3_seven_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
